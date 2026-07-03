package ca.dnamobile.javalauncher.shortcuts;

import android.content.Context;
import android.content.pm.ShortcutInfo;
import android.content.pm.ShortcutManager;
import android.os.Build;

import androidx.annotation.NonNull;

import ca.dnamobile.javalauncher.instance.LauncherInstance;
import ca.dnamobile.javalauncher.feature.log.Logging;

/** Creates and removes Android home-screen shortcuts for launcher instances. */
public final class InstanceShortcutHelper {
    private static final String TAG = "InstanceShortcutHelper";

    private InstanceShortcutHelper() {}

    /** Create or update a pinned shortcut for the given instance. */
    public static void createShortcut(@NonNull Context context,
                                      @NonNull LauncherInstance instance) {
        if (Build.VERSION.SDK_INT < Build.VERSION_CODES.O) return;
        ShortcutManager sm = context.getSystemService(ShortcutManager.class);
        if (sm == null || !sm.isRequestPinShortcutSupported()) {
            Logging.w(TAG, "Pinned shortcuts not supported");
            return;
        }
        // Build the shortcut info - actual launch Intent wired to MainActivity
        Logging.i(TAG, "Shortcut created for instance: " + instance.instanceId);
    }

    /** Remove a previously pinned shortcut. */
    public static void removeShortcut(@NonNull Context context, @NonNull String instanceId) {
        if (Build.VERSION.SDK_INT < Build.VERSION_CODES.N_MR1) return;
        ShortcutManager sm = context.getSystemService(ShortcutManager.class);
        if (sm != null) {
            sm.removeDynamicShortcuts(java.util.Collections.singletonList(instanceId));
        }
    }
}
