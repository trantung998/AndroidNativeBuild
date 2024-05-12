package game;

import android.Manifest;
import android.app.Activity;
import android.content.Context;
import android.content.pm.PackageManager;
import android.os.Build;
import android.os.VibrationEffect;
import android.os.Vibrator;
import android.util.Log;

import com.rofi.admobadshelper.AdmobHelper;
import com.rofi.admobadshelper.GoogleMobileAdsConsentManager;
import com.rofi.ads.AdsManager;
import com.rofi.ads.IAdsService;
import com.rofi.analytic.AnalyticServices;
import com.rofi.base.Constants;
import com.rofi.remoteconfig.FirebaseRemoteConfigService;
import com.unity3d.player.UnityPlayer;


public class LibraryBridge {

    private static final String UNITY_CLASS_TO_GET_MESSAGE = "RofiSdkHelper";

    public static void WarmUp() {

    }

    public static boolean IsOnline() {
        return NetworkUtil.IsOnline();
    }

    public static boolean IsRewardedVideoAvailable() {
        return AdsManager.getInstance().GetService().IsRewardReady();
    }

    public static void ShowVideoAds(String placement, int requestCode) {
        Activity activity = UnityPlayer.currentActivity;
        activity.runOnUiThread(new Runnable() {
            @Override
            public void run() {
                AdsManager.getInstance().GetService().ShowReward(requestCode);
            }
        });
    }

    public static boolean IsShowSettingAd() {
        return FirebaseRemoteConfigService.getInstance().GetBoolean(Constants.RK_SHOW_SETTING_ADS);
    }

    public static boolean IsInterAdsAvailable() {
        return AdsManager.getInstance().GetService().IsInterReady();
    }

    public static void ShowInterAds(int requestCode) {
        Activity activity = UnityPlayer.currentActivity;
        activity.runOnUiThread(new Runnable() {
            @Override
            public void run() {
                AdsManager.getInstance().GetService().ShowInter(requestCode);
            }
        });
    }

    public static void ShowBanner() {
        Activity activity = UnityPlayer.currentActivity;
        activity.runOnUiThread(new Runnable() {
            @Override
            public void run() {
                AdsManager.getInstance().GetService().ShowBanner(UnityPlayer.currentActivity);
            }
        });
    }

    public static void HideBanner() {

        Activity activity = UnityPlayer.currentActivity;
        activity.runOnUiThread(new Runnable() {
            @Override
            public void run() {
                AdsManager.getInstance().GetService().HideBanner();
            }
        });
    }

    public static boolean IsShowReloadAd() {
        return FirebaseRemoteConfigService.getInstance().GetBoolean(Constants.RK_SHOW_RELOAD_ADS);
    }

    public static void ShowMRECT() {
        Activity activity = UnityPlayer.currentActivity;
        activity.runOnUiThread(new Runnable() {
            @Override
            public void run() {
                AdsManager.getInstance().GetService().ShowMREC(UnityPlayer.currentActivity);
            }
        });
    }

    public static int GetGameplayAdType() {
        return FirebaseRemoteConfigService.getInstance().GetInt(Constants.RK_GAMEPLAY_AD_TYPE);
    }

    public static int GetRectAdType() {
        return FirebaseRemoteConfigService.getInstance().GetInt(Constants.RK_RECT_AD_TYPE);
    }

    public static void HideMRECT() {
        Activity activity = UnityPlayer.currentActivity;
        activity.runOnUiThread(new Runnable() {
            @Override
            public void run() {
                AdsManager.getInstance().GetService().HideMREC();
//                AdsService.getInstance().HideEndGameAd();
//                AdsService.getInstance().HideNativeAds();
                //AdsService.getInstance().HideMECT();
            }
        });
    }

    public static void Vibrate(long VIBRATE_PATTERN) {
        Activity activity = UnityPlayer.currentActivity;
        Vibrator mVibrator = (Vibrator) activity.getSystemService(Context.VIBRATOR_SERVICE);

        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O) {
            // API 26 and above
            mVibrator.vibrate(VibrationEffect.createOneShot(VIBRATE_PATTERN, VibrationEffect.DEFAULT_AMPLITUDE));
        } else {
            // Below API 26
            mVibrator.vibrate(VIBRATE_PATTERN);
        }
    }

    public static void ActiveFlashLight() {
        try {
            AppService.getInstance().ActiveFlashLight(UnityPlayer.currentActivity, 50);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }

    public static void OpenInternetSetting() {
        NetworkUtil.OpenNetworkSetting();
    }

    public static void OpenRate() {
//        AppService.getInstance().RequestReviewInfo(UnityPlayer.currentActivity);
        AppService.getInstance().OpenPlayStore(UnityPlayer.currentActivity);
    }

    public static void LogEvent(String eventName, String eventData) {
        AnalyticServices.getInstance().LogEvent(UnityPlayer.currentActivity, eventName, eventData);
    }

    public static void SendMessageFromNativeToGame(String functionName, String param) {
        UnityPlayer.UnitySendMessage(UNITY_CLASS_TO_GET_MESSAGE, functionName, param);
    }

    public static void RequestCameraPermission() {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M) {

            Activity activity = UnityPlayer.currentActivity;
            boolean showRequestPermissionRationale = activity.shouldShowRequestPermissionRationale(Manifest.permission.CAMERA);
            Log.d(LibraryBridge.class.getName(), "RequestCameraPermission: " + showRequestPermissionRationale);
            activity.requestPermissions(new String[]{Manifest.permission.CAMERA}, 113);

            IAdsService adsService = AdsManager.getInstance().GetService();
            adsService.IncreaseBlockAutoShowInter();
        }
    }

    public static boolean IsCameraPermissionGranted() {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M) {
            Activity activity = UnityPlayer.currentActivity;
            int status = activity.checkSelfPermission(Manifest.permission.CAMERA);

            Log.d(LibraryBridge.class.getName(), "IsCameraPermissionGranted: " + status);
            return status == PackageManager.PERMISSION_GRANTED;
        }
        return true;
    }

    public static void ShowAppSetting() {
        Activity activity = UnityPlayer.currentActivity;
        AppService.getInstance().OpenSetting(activity);
    }


    public static int GetRemoteConfigIntValue(String key) {
        return FirebaseRemoteConfigService.getInstance().GetInt(key);
    }

    public static String GetRemoteConfigStringValue(String key) {
        return FirebaseRemoteConfigService.getInstance().GetString(key);
    }

    public static boolean GetRemoteConfigBoolValue(String key) {
        return FirebaseRemoteConfigService.getInstance().GetBoolean(key);
    }

    public static void ShowNativeRectAd() {
        Activity activity = UnityPlayer.currentActivity;
        activity.runOnUiThread(new Runnable() {
            @Override
            public void run() {
                AdsManager.getInstance().GetService().ShowNativeMREC(activity);
            }
        });
    }

    public static void HideNativeRectAd() {
        Activity activity = UnityPlayer.currentActivity;
        activity.runOnUiThread(new Runnable() {
            @Override
            public void run() {
                AdsManager.getInstance().GetService().HideNativeMREC();
            }
        });
    }

    public static void ShowNativeBannerAd() {
        Activity activity = UnityPlayer.currentActivity;
        activity.runOnUiThread(new Runnable() {
            @Override
            public void run() {
                AdsManager.getInstance().GetService().ShowNativeBanner(activity);
            }
        });
    }

    public static void HideNativeBannerAd() {
        Activity activity = UnityPlayer.currentActivity;
        activity.runOnUiThread(new Runnable() {
            @Override
            public void run() {
                AdsManager.getInstance().GetService().HideNativeBanner();
            }
        });
    }

    public static void HideAllBannerAds() {
        HideBanner();
        HideNativeBannerAd();
    }

    public static void HideAllRectAds() {
        HideMRECT();
        HideNativeRectAd();
    }

    public static boolean IsOpenAppAdsAvailable() {
        return AdsManager.getInstance().GetService().IsOpenAppAdsAvailable();
    }

    public static void LoadOpenAppAds() {
        Activity activity = UnityPlayer.currentActivity;
        AdsManager.getInstance().GetService().LoadOpenAppAds(activity);
    }

    public static void ShowOpenAppAds() {
        Activity activity = UnityPlayer.currentActivity;
        AdsManager.getInstance().GetService().ShowOpenAppAds(activity);
    }

    public static void DisableAdsResume() {
        AdsManager.getInstance().GetService().DisableResumeAds();
    }

    public static void EnableAdsResume() {
        AdsManager.getInstance().GetService().EnableResumeAds();
    }

    public static boolean IsConsentFlowFinish() {
        Activity activity = UnityPlayer.currentActivity;
        return GoogleMobileAdsConsentManager.getInstance(activity).IsConsentFlowFinished();
    }

    public static boolean AdMobCanRequestAds() {
        Activity activity = UnityPlayer.currentActivity;
        //case ko bat UMP
        if (AdmobHelper.getInstance().getConsentCode() == 0) return true;
        //case bat UMP
        return GoogleMobileAdsConsentManager.getInstance(activity).canRequestAds();
    }

    public static void DisableInterAds() {
        AdsManager.getInstance().GetService().DisableInterAds();
    }

    public static void EnableInterAds() {
        AdsManager.getInstance().GetService().EnableInterAds();
    }


//    public static void LoadFBNative() {
//        Activity activity = UnityPlayer.currentActivity;
//        activity.runOnUiThread(new Runnable() {
//            @Override
//            public void run() {
//                FBNativeAdsHelper.getInstance().LoadAd(activity);
//            }
//        });
//    }
//
//    public static void ShowFBNative() {
//        Activity activity = UnityPlayer.currentActivity;
//        activity.runOnUiThread(new Runnable() {
//            @Override
//            public void run() {
//                FBNativeAdsHelper.getInstance().ShowAd();
//            }
//        });
//
//    }
//
//    public static void HideFBNative() {
//        Activity activity = UnityPlayer.currentActivity;
//        activity.runOnUiThread(new Runnable() {
//            @Override
//            public void run() {
//                FBNativeAdsHelper.getInstance().HideAds();
//            }
//        });
//
//    }
}
