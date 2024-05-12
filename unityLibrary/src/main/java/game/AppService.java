package game;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.hardware.Camera;
import android.hardware.Sensor;
import android.hardware.SensorManager;
import android.hardware.camera2.CameraAccessException;
import android.hardware.camera2.CameraManager;
import android.net.Uri;
import android.os.Build;
import android.provider.Settings;
import android.util.Log;

import services.ShakeDetector;

public class AppService {
    private final String TAG = "AppService";

    private static AppService mInstace = null;
    private boolean supportFlashLight;

    private Camera mCamera;
    private Camera.Parameters parameters;
    private CameraManager camManager;

    private SensorManager mSensorManager;
    private Sensor mAccelerometer;
    private ShakeDetector mShakeDetector;


    public static AppService getInstance() {
        if (null == mInstace) {
            mInstace = new AppService();
        }
        return mInstace;
    }

    public void Init(Activity activity) {
        supportFlashLight = activity.getApplicationContext().getPackageManager().hasSystemFeature(PackageManager.FEATURE_CAMERA_FLASH);

        camManager = (CameraManager) activity.getApplicationContext().getSystemService(Context.CAMERA_SERVICE);

        // ShakeDetector initialization
        mSensorManager = (SensorManager) activity.getSystemService(Context.SENSOR_SERVICE);
        mAccelerometer = mSensorManager
                .getDefaultSensor(Sensor.TYPE_ACCELEROMETER);
        mShakeDetector = new ShakeDetector();
        mShakeDetector.setOnShakeListener(new ShakeDetector.OnShakeListener() {

            @Override
            public void onShake(int count) {
                /*
                 * The following method, "handleShakeEvent(count):" is a stub //
                 * method you would use to setup whatever you want done once the
                 * device has been shook.
                 */
//                handleShakeEvent(count);
                Log.d(TAG, "onShake: ```````````````````");
                LibraryBridge.SendMessageFromNativeToGame("OnDeviceShake", "");
            }
        });
    }

    public void OnResume() {
        mSensorManager.registerListener(mShakeDetector, mAccelerometer, SensorManager.SENSOR_DELAY_UI);
    }

    public void OnPause() {
        mSensorManager.unregisterListener(mShakeDetector);
    }

    public void ActiveFlashLight(Activity activity, long duration_in_milisec) throws InterruptedException {
        if (!supportFlashLight) {
            Log.d(TAG, "ActiveFlashLight: Failed");
            return;
        } else {
            turnFlashlightOn(activity);
            Thread.sleep(duration_in_milisec);
            turnFlashlightOff(activity);
        }
    }

    private void turnFlashlightOn(Activity activity) {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M) {
            try {
                String cameraId = null;
                if (camManager != null) {
                    String[] camIds = camManager.getCameraIdList();
                    if(camIds != null && camIds.length > 0){

                    }
                    cameraId = camManager.getCameraIdList()[0];

                    camManager.setTorchMode(cameraId, true);
                }
            } catch (CameraAccessException e) {
                Log.e(TAG, e.toString());
            }
        } else {
            try {
                mCamera = Camera.open();
                parameters = mCamera.getParameters();
                parameters.setFlashMode(Camera.Parameters.FLASH_MODE_TORCH);
                mCamera.setParameters(parameters);
                mCamera.startPreview();
            }
            catch (Exception e) {
                Log.e(TAG, e.toString());
            }
        }
    }

    private void turnFlashlightOff(Activity activity) {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M) {
            try {
                String cameraId;
                camManager = (CameraManager) activity.getSystemService(Context.CAMERA_SERVICE);
                if (camManager != null) {
                    cameraId = camManager.getCameraIdList()[0]; // Usually front camera is at 0 position.
                    camManager.setTorchMode(cameraId, false);
                }
            } catch (CameraAccessException e) {
                e.printStackTrace();
            }
        } else {
            try {
                mCamera = Camera.open();
                parameters = mCamera.getParameters();
                parameters.setFlashMode(Camera.Parameters.FLASH_MODE_OFF);
                mCamera.setParameters(parameters);
                mCamera.stopPreview();
            }
            catch (Exception e) {
                Log.e(TAG, e.toString());
            }
        }
    }

    public void RequestReviewInfo(Activity activity) {
//        ReviewManager manager = ReviewManagerFactory.create(activity.getApplicationContext());
//
//        Task<ReviewInfo> request = manager.requestReviewFlow();
//
//        request.addOnCompleteListener(task -> {
//            if (task.isSuccessful()) {
//                // We can get the ReviewInfo object
//                ReviewInfo reviewInfo = task.getResult();
//                Task<Void> flow = manager.launchReviewFlow(activity, reviewInfo);
//            } else {
//                // There was some problem, log or handle the error code.
//                Log.d(TAG, "ShowInAppReviewsFlow Error: " + task.getException().getMessage());
//            }
//        });
    }

    public void OpenPlayStore(Activity activity) {
        try {
            final String appPackageName = activity.getApplicationContext().getPackageName();
            final String storePath = "https://play.google.com/store/apps/details?id=" + appPackageName;
            Intent viewIntent =
                    new Intent("android.intent.action.VIEW",
                            Uri.parse(storePath));

            activity.startActivity(viewIntent);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void OpenSetting(Activity activity) {
        Intent intent = new Intent(Settings.ACTION_APPLICATION_DETAILS_SETTINGS);
        Uri uri = Uri.fromParts("package", activity.getPackageName(), null);
        intent.setData(uri);
        activity.startActivity(intent);
    }
}
