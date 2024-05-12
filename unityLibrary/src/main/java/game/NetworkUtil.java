package game;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.net.ConnectivityManager;
import android.net.Network;
import android.net.NetworkCapabilities;
import android.net.NetworkInfo;
import android.os.Build;
import android.provider.Settings;
import android.util.Log;

import androidx.annotation.IntRange;

import com.unity3d.player.UnityPlayer;

public class NetworkUtil {
    public static final int TYPE_WIFI = 1;
    public static final int TYPE_MOBILE = 2;
    public static final int TYPE_NOT_CONNECTED = 0;
    public static final int NETWORK_STATUS_NOT_CONNECTED = 0;
    public static final int NETWORK_STATUS_WIFI = 1;
    public static final int NETWORK_STATUS_MOBILE = 2;
    private static String TAG = NetworkUtil.class.toString();

    public static boolean IsOnline() {

        Activity activity = UnityPlayer.currentActivity;
        boolean connected = false;

        ConnectivityManager connectivityManager = null;
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M) {
            connectivityManager = activity.getSystemService(ConnectivityManager.class);
        } else {
            connectivityManager = (ConnectivityManager) activity.getSystemService(Context.CONNECTIVITY_SERVICE);
        }

        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M) {
            Network currentNetwork = connectivityManager.getActiveNetwork();

            if (currentNetwork != null) {

                NetworkCapabilities caps = connectivityManager.getNetworkCapabilities(currentNetwork);
                if (caps != null) {
                    Log.d(TAG, "currentNetwork:  " + currentNetwork.toString() + " has cap internet :" + caps.hasCapability(NetworkCapabilities.NET_CAPABILITY_INTERNET));
                    boolean hasWifi = caps.hasTransport(NetworkCapabilities.TRANSPORT_WIFI);
                    boolean hasCell = caps.hasTransport(NetworkCapabilities.TRANSPORT_CELLULAR);
                    Log.d(TAG, "currentNetwork:  " + currentNetwork.toString() + " has cap hasWifi :" + hasWifi);
                    Log.d(TAG, "currentNetwork:  " + currentNetwork.toString() + " has cap hasCell :" + hasCell);
                } else {
                    Log.d(TAG, "LOST INTERNET ~~~~~~~~~~:");
                }
            }else{
                Log.d(TAG, "LOST INTERNET ~~~~~~~~~~:");
            }
//                caps.hasCapability(NetworkCapabilities.NET_CAPABILITY_INTERNET);
        }

//        ConnectivityManager connectivityManager = (ConnectivityManager) activity.getSystemService(Context.CONNECTIVITY_SERVICE);
        if (connectivityManager == null) return true;

        NetworkInfo mobileNetworkInfo = connectivityManager.getNetworkInfo(ConnectivityManager.TYPE_MOBILE);

        NetworkInfo wifiNetworkInfo = connectivityManager.getNetworkInfo(ConnectivityManager.TYPE_WIFI);

        if (mobileNetworkInfo != null) {
            connected = mobileNetworkInfo.getState() == NetworkInfo.State.CONNECTED;
            Log.d(TAG, "IsOnline TYPE_MOBILE: " + mobileNetworkInfo.getState());
        } else {
            Log.d(TAG, "mobileNetworkInfo NULL");
        }

        if (!connected)
            if (wifiNetworkInfo != null) {
                connected = wifiNetworkInfo.getState() == NetworkInfo.State.CONNECTED;
                Log.d(TAG, "IsOnline TYPE_WIFI: " + wifiNetworkInfo.getState());
            }

        return connected;
    }

    public static int IsNetworkAvailable() {
        Activity activity = UnityPlayer.currentActivity;
        ConnectivityManager connectivityManager =
                (ConnectivityManager) activity.getApplicationContext().getSystemService(Context.CONNECTIVITY_SERVICE);
        boolean connected = false;
        NetworkInfo activeNetwork = connectivityManager.getActiveNetworkInfo();
        if (null != activeNetwork) {
            if (activeNetwork.getType() == ConnectivityManager.TYPE_WIFI) {
                Log.d(TAG, "IsNetworkAvailable TYPE_WIFI:");
                return TYPE_WIFI;
            }

            if (activeNetwork.getType() == ConnectivityManager.TYPE_MOBILE) {
                Log.d(TAG, "IsNetworkAvailable TYPE_MOBILE:");
                return TYPE_MOBILE;
            }
        }
        return TYPE_NOT_CONNECTED;
    }

    public static void OpenNetworkSetting() {
        Activity activity = UnityPlayer.currentActivity;
        Intent intent = new Intent(Settings.ACTION_WIFI_SETTINGS);
        activity.startActivity(intent);
    }

    public static int getConnectivityStatus(Context context) {
        ConnectivityManager cm = (ConnectivityManager) context.getSystemService(Context.CONNECTIVITY_SERVICE);

        NetworkInfo activeNetwork = cm.getActiveNetworkInfo();
        if (null != activeNetwork) {
            if (activeNetwork.getType() == ConnectivityManager.TYPE_WIFI)
                return TYPE_WIFI;

            if (activeNetwork.getType() == ConnectivityManager.TYPE_MOBILE)
                return TYPE_MOBILE;
        }
        return TYPE_NOT_CONNECTED;
    }

    @IntRange(from = 0, to = 3)
    public static int getConnectionType(Context context) {
        int result = 0; // Returns connection type. 0: none; 1: mobile data; 2: wifi; 3: vpn
        ConnectivityManager cm = (ConnectivityManager) context.getSystemService(Context.CONNECTIVITY_SERVICE);
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M) {
            if (cm != null) {
                NetworkCapabilities capabilities = cm.getNetworkCapabilities(cm.getActiveNetwork());
                if (capabilities != null) {
                    if (capabilities.hasTransport(NetworkCapabilities.TRANSPORT_WIFI)) {
                        result = 2;
                    } else if (capabilities.hasTransport(NetworkCapabilities.TRANSPORT_CELLULAR)) {
                        result = 1;
                    } else if (capabilities.hasTransport(NetworkCapabilities.TRANSPORT_VPN)) {
                        result = 3;
                    }
                }
            }
        } else {
            if (cm != null) {
                NetworkInfo activeNetwork = cm.getActiveNetworkInfo();
                if (activeNetwork != null) {
                    // connected to the internet
                    if (activeNetwork.getType() == ConnectivityManager.TYPE_WIFI) {
                        result = 2;
                    } else if (activeNetwork.getType() == ConnectivityManager.TYPE_MOBILE) {
                        result = 1;
                    } else if (activeNetwork.getType() == ConnectivityManager.TYPE_VPN) {
                        result = 3;
                    }
                }
            }
        }
        return result;
    }
}
