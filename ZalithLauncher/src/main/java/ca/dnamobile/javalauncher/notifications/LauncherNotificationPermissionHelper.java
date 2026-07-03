package ca.dnamobile.javalauncher.notifications;

import android.Manifest;
import android.app.Activity;
import android.content.pm.PackageManager;
import android.os.Build;

import androidx.annotation.NonNull;
import androidx.core.app.ActivityCompat;
import androidx.core.content.ContextCompat;

/** Handles requesting the POST_NOTIFICATIONS permission on Android 13+. */
public final class LauncherNotificationPermissionHelper {
    public static final int REQUEST_CODE = 1001;

    private LauncherNotificationPermissionHelper() {}

    /** Returns true if notification permission is granted (or not needed on <API 33). */
    public static boolean hasPermission(@NonNull Activity activity) {
        if (Build.VERSION.SDK_INT < Build.VERSION_CODES.TIRAMISU) return true;
        return ContextCompat.checkSelfPermission(activity, Manifest.permission.POST_NOTIFICATIONS)
                == PackageManager.PERMISSION_GRANTED;
    }

    /** Request the POST_NOTIFICATIONS permission if not already granted. */
    public static void requestIfNeeded(@NonNull Activity activity) {
        if (Build.VERSION.SDK_INT < Build.VERSION_CODES.TIRAMISU) return;
        if (!hasPermission(activity)) {
            ActivityCompat.requestPermissions(activity,
                    new String[]{Manifest.permission.POST_NOTIFICATIONS},
                    REQUEST_CODE);
        }
    }
}
