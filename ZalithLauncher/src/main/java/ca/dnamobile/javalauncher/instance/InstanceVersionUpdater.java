package ca.dnamobile.javalauncher.instance;

import android.content.Context;

import androidx.annotation.NonNull;

import ca.dnamobile.javalauncher.feature.log.Logging;

/**
 * Handles migrating or updating a LauncherInstance when the Minecraft
 * version or mod loader changes.
 */
public final class InstanceVersionUpdater {
    private static final String TAG = "InstanceVersionUpdater";

    public interface Callback {
        void onSuccess();
        void onFailure(@NonNull String reason);
    }

    private InstanceVersionUpdater() {}

    public static void updateInstance(@NonNull Context context,
                                      @NonNull LauncherInstance instance,
                                      @NonNull String newVersionId,
                                      @NonNull Callback callback) {
        Logging.i(TAG, "Updating instance " + instance.instanceId + " to " + newVersionId);
        // TODO: download and link new version assets
        callback.onSuccess();
    }
}
