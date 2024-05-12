package com.rofi.lib;

import android.util.Log;

import game.LibraryBridge;

public class AndroidBridge {
    public static void WarmUp() {
    }

    public static boolean IsOnline() {
        return LibraryBridge.IsOnline();
    }

    public static void ShowBanner() {
        LibraryBridge.ShowBanner();
    }

    public static void HideBanner() {
        LibraryBridge.HideBanner();
    }

    public static void ShowMRECT() {
        LibraryBridge.ShowMRECT();
    }

    public static void HideMRECT() {
        LibraryBridge.HideMRECT();
    }

    public static void ShowNativeRectAd() {
        LibraryBridge.ShowNativeRectAd();
    }

    public static void HideNativeRectAd() {
        LibraryBridge.HideNativeRectAd();
    }

    public static void ShowNativeBannerAd() {
        LibraryBridge.ShowNativeBannerAd();
    }

    public static void HideNativeBannerAd() {
        LibraryBridge.HideNativeBannerAd();
    }

    public static void HideAllBannerAds() {
        LibraryBridge.HideAllBannerAds();
    }

    public static void HideAllRectAds() {
        LibraryBridge.HideAllRectAds();
    }


    public static boolean IsRewardedVideoAvailable() {
        return LibraryBridge.IsRewardedVideoAvailable();
    }

    public static void ShowVideoAds(String placement, int requestCode) {
        LibraryBridge.ShowVideoAds(placement, requestCode);
    }

    public static boolean IsInterAdsAvailable() {
        return LibraryBridge.IsInterAdsAvailable();
    }

    public static void ShowInterAds(int requestCode) {
        LibraryBridge.ShowInterAds(requestCode);
    }

    public static void Vibrate(long VIBRATE_PATTERN) {
        LibraryBridge.Vibrate(VIBRATE_PATTERN);
    }

    public static void ActiveFlashLight() {
        LibraryBridge.ActiveFlashLight();
    }

    public static void OpenRate() {
        LibraryBridge.OpenRate();
    }

    public static void OpenInternetSetting() {
        LibraryBridge.OpenInternetSetting();
    }

    public static void LogEvent(String eventName, String eventData) {
        Log.d(AndroidBridge.class.getName(), "LogEvent" + eventName + " event Data" + eventData);
        LibraryBridge.LogEvent(eventName, eventData);
    }

    public static void RequestCameraPermission() {
        LibraryBridge.RequestCameraPermission();
    }

    public static boolean IsCameraPermissionGranted() {
        return LibraryBridge.IsCameraPermissionGranted();
    }

    public static boolean IsShowSettingAd() {
        return LibraryBridge.IsShowSettingAd();
    }

    public static boolean IsShowReloadAd() {
        return LibraryBridge.IsShowReloadAd();
    }

    public static void ShowAppSetting() {
        LibraryBridge.ShowAppSetting();
    }

    public static int GetGameplayAdType() {
        return LibraryBridge.GetGameplayAdType();
    }

    public static int GetRectAdType() {
        return LibraryBridge.GetRectAdType();
    }

    public static int GetRemoteConfigIntValue(String key) {
        return LibraryBridge.GetRemoteConfigIntValue(key);
    }

    public static String GetRemoteConfigStringValue(String key) {
        return LibraryBridge.GetRemoteConfigStringValue(key);
    }

    public static boolean GetRemoteConfigBoolValue(String key) {
        return LibraryBridge.GetRemoteConfigBoolValue(key);
    }

    public static boolean IsOpenAppAdsAvailable() {
        return LibraryBridge.IsOpenAppAdsAvailable();
    }

    public static void LoadOpenAppAds() {
        LibraryBridge.LoadOpenAppAds();
    }

    public static void ShowOpenAppAds() {
        LibraryBridge.ShowOpenAppAds();
    }

    public static void DisableAdsInter() {
        LibraryBridge.DisableInterAds();
    }

    public static void EnableAdsInter() {
        LibraryBridge.EnableInterAds();
    }

    public static boolean IsConsentFlowFinish() {
        return LibraryBridge.IsConsentFlowFinish();
    }

    public static boolean AdMobCanRequestAds() {
        return LibraryBridge.AdMobCanRequestAds();
    }


//    public static void LoadFBNative() {
//        LibraryBridge.LoadFBNative();
//    }
//    public static void ShowFBNative() {
//        LibraryBridge.ShowFBNative();
//    }
//    public static void HideFBNative() {
//        LibraryBridge.HideFBNative();
//    }
}
