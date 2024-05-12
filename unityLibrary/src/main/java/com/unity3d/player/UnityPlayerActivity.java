package com.unity3d.player;

import android.Manifest;
import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.content.res.Configuration;

import android.net.ConnectivityManager;
import android.net.Network;
import android.net.NetworkCapabilities;
import android.net.NetworkRequest;
import android.os.Build;
import android.os.Bundle;
import android.util.Log;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.Window;


import androidx.core.app.ActivityCompat;
import androidx.core.content.ContextCompat;

import com.rofi.admobadshelper.AdmobHelper;
import com.rofi.admobadshelper.IGoogleConsentCallback;
import com.rofi.ads.AdsEventListener;
import com.rofi.ads.AdsManager;
import com.rofi.ads.IAdsService;
import com.rofi.maxads.MaxAdsService;
import com.rofi.remoteconfig.FirebaseRemoteConfigService;

import java.util.Timer;
import java.util.TimerTask;

import game.AppService;
import game.LibraryBridge;
import game.NetworkUtil;
import io.reactivex.annotations.NonNull;

public class UnityPlayerActivity extends Activity implements IUnityPlayerLifecycleEvents {
    protected UnityPlayer mUnityPlayer; // don't change the name of this variable; referenced from native code
    private String TAG = UnityPlayerActivity.class.toString();
    final int PERMISSION_NOTIFICATION_REQUEST_CODE = 112;
    final int PERMISSION_CAMERA_REQUEST_CODE = 113;

    // Override this in your custom UnityPlayerActivity to tweak the command line arguments passed to the Unity Android Player
    // The command line arguments are passed as a string, separated by spaces
    // UnityPlayerActivity calls this from 'onCreate'
    // Supported: -force-gles20, -force-gles30, -force-gles31, -force-gles31aep, -force-gles32, -force-gles, -force-vulkan
    // See https://docs.unity3d.com/Manual/CommandLineArguments.html
    // @param cmdLine the current command line arguments, may be null
    // @return the modified command line string or null
    protected String updateUnityCommandLineArguments(String cmdLine) {
        return cmdLine;
    }

    // Setup activity layout
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        requestWindowFeature(Window.FEATURE_NO_TITLE);
        super.onCreate(savedInstanceState);

        String cmdLine = updateUnityCommandLineArguments(getIntent().getStringExtra("unity"));
        getIntent().putExtra("unity", cmdLine);

        mUnityPlayer = new UnityPlayer(this, this);
        setContentView(mUnityPlayer);
        mUnityPlayer.requestFocus();

        InitServices();

        RequestNotification();
    }

    private void RequestNotification() {
        Log.d(TAG, "RequestNotification SDK_INT: " + Build.VERSION.SDK_INT);
        if (Build.VERSION.SDK_INT > 32) {
            int checkSelfPermission = ContextCompat.checkSelfPermission(this.getApplicationContext(), Manifest.permission.POST_NOTIFICATIONS);
            if (checkSelfPermission != PackageManager.PERMISSION_GRANTED) {
                try {
                    ActivityCompat.requestPermissions(this,
                            new String[]{Manifest.permission.POST_NOTIFICATIONS},
                            PERMISSION_NOTIFICATION_REQUEST_CODE);
                } catch (Exception e) {

                }
            } else {
                StartConsentFlow();
            }
        } else {
            StartConsentFlow();
        }
    }

    private void StartConsentFlow() {
        if (!NetworkUtil.IsOnline()) {
            //skip consent flow
            AdmobHelper.getInstance().bypassConsentFlow(UnityPlayer.currentActivity);

            FinishConsentFlow();
        } else {
            AdmobHelper.getInstance().startConsentFlow(UnityPlayer.currentActivity, new IGoogleConsentCallback() {
                @Override
                public void onFinish(int code) {
                    //init ads service affter this
                    FinishConsentFlow();
                }
            });
        }
    }

    private void FinishConsentFlow() {
        Activity activity = UnityPlayer.currentActivity;
        InitAnalyticModule();
        FirebaseRemoteConfigService.getInstance().Init(activity);
        InitAdsModule();

        LibraryBridge.SendMessageFromNativeToGame("FinishConsentFlow", "");
    }

    private void InitServices() {
        AppService.getInstance().Init(this);
        ListenNetworkChange();
    }

    private void InitAnalyticModule() {

        Activity activity = UnityPlayer.currentActivity;
        String[] analyticArgs = new String[2];
        analyticArgs[0] = activity.getString(R.string.APPFLYER_DEV_KEY);
        analyticArgs[1] = activity.getString(R.string.ads_main_network);
        com.rofi.analytic.AnalyticServices.getInstance().Init(activity, analyticArgs);
    }

    private void InitAdsModule() {
        Activity activity = UnityPlayer.currentActivity;
        AdsEventListener adsEventListener = new AdsEventListener() {
            @Override
            public void onVideoRewardLoaded() {
                com.rofi.analytic.AnalyticServices.getInstance().LogEvent(UnityPlayer.currentActivity, "af_rewarded_api_called", null);
            }

            @Override
            public void onVideoRewardDisplayed() {
                com.rofi.analytic.AnalyticServices.getInstance().LogEvent(UnityPlayer.currentActivity, "af_rewarded_ad_displayed", null);
            }

            @Override
            public void onVideoRewardUserRewarded(String s) {
                LibraryBridge.SendMessageFromNativeToGame("OnVideoRewardedWithCode", s);
            }

            @Override
            public void onInterLoaded() {
                com.rofi.analytic.AnalyticServices.getInstance().LogEvent(UnityPlayer.currentActivity, "af_inters_api_called", null);
            }

            @Override
            public void onInterDisplayed() {
                com.rofi.analytic.AnalyticServices.getInstance().LogEvent(UnityPlayer.currentActivity, "af_inters_displayed", null);
                com.rofi.analytic.AnalyticServices.getInstance().OnShowInter();
            }

            @Override
            public void onInterHidden(String s) {
                LibraryBridge.SendMessageFromNativeToGame("OnShowInterAds", s);
            }

            @Override
            public void onAdClicked(String s) {
                com.rofi.analytic.AnalyticServices.getInstance().LogEventAdClicked(UnityPlayer.currentActivity, s);
            }

            @Override
            public void onAdRevenuePaid(String adFormat, String adUnitId, String adNetwork, double revenue) {
                Log.d(TAG, "onAdRevenuePaid: " + adFormat + ":  " + adUnitId + ":  " + adNetwork + ":  ");
                com.rofi.analytic.AnalyticServices.getInstance().RevenueTracking(UnityPlayer.currentActivity, adFormat, adUnitId, adNetwork, revenue);
            }
        };


        String[] adsArgs = new String[16];
        //max ads service
        IAdsService adsServiceInstance = new MaxAdsService();
        adsArgs[0] = activity.getString(R.string.applovin_banner_key);
        adsArgs[1] = activity.getString(R.string.applovin_inter_key);
        adsArgs[2] = activity.getString(R.string.applovin_videoreward_key);
        adsArgs[3] = activity.getString(R.string.applovin_mrec_ads_key);
        adsArgs[4] = activity.getString(R.string.applovin_native_ads_key);
        adsArgs[5] = activity.getString(R.string.applovin_native_small);

        adsArgs[6] = activity.getString(R.string.banner_position);
        adsArgs[7] = activity.getString(R.string.mrec_possition);

        adsArgs[8] = activity.getString(R.string.applovin_app_open);

//        adsArgs[8] = activity.getString(R.string.applovin_app_open);

//        adsArgs[0] = activity.getString(R.string.ironsource_app_key);
//        IAdsService adsServiceInstance = new IronsourceAdsService();

        adsServiceInstance.Init(activity, adsArgs);
        adsServiceInstance.SetEventListener(adsEventListener);
        adsServiceInstance.DisableInterAds();
        AdsManager.getInstance().Init(adsServiceInstance);

//        String[] adsNativeArgs = new String[1];
//        adsNativeArgs[0] = activity.getString(R.string.facebook_native_ads_placement_id);
//        FBNativeAdsHelper.getInstance().Init(activity,adsNativeArgs);

    }

    @Override
    public void onRequestPermissionsResult(int requestCode, String[] permissions,
                                           int[] grantResults) {
        switch (requestCode) {
            case PERMISSION_CAMERA_REQUEST_CODE:
                // If request is cancelled, the result arrays are empty.
                if (grantResults.length > 0 && grantResults[0] == PackageManager.PERMISSION_GRANTED) {
                    // Permission is granted. Continue the action or workflow
                    // in your app.
                    LibraryBridge.SendMessageFromNativeToGame("OnCameraPermissionGranted", "true");
                } else {
                    // Explain to the user that the feature is unavailable because
                    // the feature requires a permission that the user has denied.
                    // At the same time, respect the user's decision. Don't link to
                    // system settings in an effort to convince the user to change
                    // their decision.
//                    LibraryBridge.SendMessageFromNativeToGame("OnCameraPermissionGranted", "false");
                    if (ActivityCompat.shouldShowRequestPermissionRationale(UnityPlayerActivity.this, Manifest.permission.CAMERA)) {
                        // case 4 User has denied permission but not permanently
                        LibraryBridge.SendMessageFromNativeToGame("OnCameraPermissionDenied", "");
                    } else {
                        // case 5. Permission denied permanently.
                        // You can open Permission setting's page from here now.
//                        openSettingDialog();
                        LibraryBridge.SendMessageFromNativeToGame("OnCameraPermissionDenied", "ShowAlert");
                    }
                }
                break;
            case PERMISSION_NOTIFICATION_REQUEST_CODE:
                StartConsentFlow();
                break;
        }
        // Other 'case' lines to check for other
        // permissions this app might request.
    }

    private Timer checkNetworkTimer;
    private TimerTask checkNetworkTimerTask;
    private boolean isTimerRunning;

    private ConnectivityManager.NetworkCallback networkCallback = new ConnectivityManager.NetworkCallback() {
        @Override
        public void onAvailable(@NonNull Network network) {
            super.onAvailable(network);
//            Log.d(TAG, " onAvailable");
            LibraryBridge.SendMessageFromNativeToGame("OnNetworkAvailable", "");
        }

        @Override
        public void onLost(@NonNull Network network) {
            super.onLost(network);
            int typeConnection = NetworkUtil.getConnectionType(getApplicationContext());

            Log.d(TAG, " onLost typeConnection : " + typeConnection);
            if (!NetworkUtil.IsOnline()) {
//                Log.d(TAG, " onLost");
                LibraryBridge.SendMessageFromNativeToGame("OnNetworkLost", "");
                isTimerRunning = true;
                {
                    checkNetworkTimer = new Timer();
                    checkNetworkTimer.scheduleAtFixedRate(new TimerTask() {
                        @Override
                        public void run() {
                            int typeConnection = NetworkUtil.getConnectionType(getApplicationContext());
                            Log.d(TAG, " checkNetworkTimerTask " + typeConnection);
                            if (typeConnection != 0) {
                                if (isTimerRunning) {
                                    checkNetworkTimer.cancel();
                                    checkNetworkTimer.purge();
                                    isTimerRunning = false;
                                    LibraryBridge.SendMessageFromNativeToGame("OnNetworkAvailable", "");
                                }
                            }
                        }
                    }, 0, 1212);
                }

            }
        }

        @Override
        public void onCapabilitiesChanged(@NonNull Network network, @NonNull NetworkCapabilities networkCapabilities) {
            super.onCapabilitiesChanged(network, networkCapabilities);
            final boolean unmetered = networkCapabilities.hasCapability(NetworkCapabilities.NET_CAPABILITY_NOT_METERED);
            Log.d(TAG, " onCapabilitiesChanged: " + network);

            if (!NetworkUtil.IsOnline()) {
                Log.d(TAG, " onLost");
            } else {
                Log.d(TAG, " online");
                LibraryBridge.SendMessageFromNativeToGame("OnNetworkAvailable", "");
            }
        }
    };

    public void ListenNetworkChange() {

        if (android.os.Build.VERSION.SDK_INT >= android.os.Build.VERSION_CODES.M) {
            Activity activity = UnityPlayer.currentActivity;
            ConnectivityManager connectivityManager = (ConnectivityManager) activity.getApplicationContext().getSystemService(Context.CONNECTIVITY_SERVICE);

            NetworkRequest networkRequest = new NetworkRequest.Builder()
                    .addCapability(NetworkCapabilities.NET_CAPABILITY_INTERNET)
                    .addTransportType(NetworkCapabilities.TRANSPORT_WIFI)
                    .addTransportType(NetworkCapabilities.TRANSPORT_CELLULAR)
                    .build();

            connectivityManager.registerNetworkCallback(networkRequest, networkCallback);
        }


    }

    // When Unity player unloaded move task to background
    @Override
    public void onUnityPlayerUnloaded() {
        moveTaskToBack(true);
    }

    // Callback before Unity player process is killed
    @Override
    public void onUnityPlayerQuitted() {
    }

    @Override
    protected void onNewIntent(Intent intent) {
        // To support deep linking, we need to make sure that the client can get access to
        // the last sent intent. The clients access this through a JNI api that allows them
        // to get the intent set on launch. To update that after launch we have to manually
        // replace the intent with the one caught here.
        setIntent(intent);
        mUnityPlayer.newIntent(intent);
    }

    // Quit Unity
    @Override
    protected void onDestroy() {
        mUnityPlayer.destroy();
        super.onDestroy();
    }

    // If the activity is in multi window mode or resizing the activity is allowed we will use
    // onStart/onStop (the visibility callbacks) to determine when to pause/resume.
    // Otherwise it will be done in onPause/onResume as Unity has done historically to preserve
    // existing behavior.
    @Override
    protected void onStop() {
        super.onStop();
        mUnityPlayer.onStop();
    }

    @Override
    protected void onStart() {
        super.onStart();
        mUnityPlayer.onStart();
    }

    // Pause Unity
    @Override
    protected void onPause() {
        super.onPause();
        mUnityPlayer.onPause();
    }

    // Resume Unity
    @Override
    protected void onResume() {
        super.onResume();
        mUnityPlayer.onResume();
    }

    // Low Memory Unity
    @Override
    public void onLowMemory() {
        super.onLowMemory();
        mUnityPlayer.lowMemory();
    }

    // Trim Memory Unity
    @Override
    public void onTrimMemory(int level) {
        super.onTrimMemory(level);
        if (level == TRIM_MEMORY_RUNNING_CRITICAL) {
            mUnityPlayer.lowMemory();
        }
    }

    // This ensures the layout will be correct.
    @Override
    public void onConfigurationChanged(Configuration newConfig) {
        super.onConfigurationChanged(newConfig);
        mUnityPlayer.configurationChanged(newConfig);
    }

    // Notify Unity of the focus change.
    @Override
    public void onWindowFocusChanged(boolean hasFocus) {
        super.onWindowFocusChanged(hasFocus);
        mUnityPlayer.windowFocusChanged(hasFocus);
    }

    // For some reason the multiple keyevent type is not supported by the ndk.
    // Force event injection by overriding dispatchKeyEvent().
    @Override
    public boolean dispatchKeyEvent(KeyEvent event) {
        if (event.getAction() == KeyEvent.ACTION_MULTIPLE)
            return mUnityPlayer.injectEvent(event);
        return super.dispatchKeyEvent(event);
    }

    // Pass any events not handled by (unfocused) views straight to UnityPlayer
    @Override
    public boolean onKeyUp(int keyCode, KeyEvent event) {
        return mUnityPlayer.onKeyUp(keyCode, event);
    }

    @Override
    public boolean onKeyDown(int keyCode, KeyEvent event) {
        return mUnityPlayer.onKeyDown(keyCode, event);
    }

    @Override
    public boolean onTouchEvent(MotionEvent event) {
        return mUnityPlayer.onTouchEvent(event);
    }

    @Override
    public boolean onGenericMotionEvent(MotionEvent event) {
        return mUnityPlayer.onGenericMotionEvent(event);
    }
}
