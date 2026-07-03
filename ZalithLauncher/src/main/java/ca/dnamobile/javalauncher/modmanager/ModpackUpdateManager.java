package ca.dnamobile.javalauncher.modmanager;

import android.content.Context;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;

import ca.dnamobile.javalauncher.feature.log.Logging;

/**
 * Checks for and applies modpack updates for DroidBridge instances.
 */
public final class ModpackUpdateManager {
    private static final String TAG = "ModpackUpdateManager";

    public interface Callback {
        void onUpdateAvailable(@NonNull String modpackId, @NonNull String version);
        void onNoUpdate();
        void onError(@NonNull String reason);
    }

    private ModpackUpdateManager() {}

    /** Check for updates for the given modpack. Results delivered via callback. */
    public static void checkForUpdates(@NonNull Context context,
                                       @NonNull String modpackId,
                                       @Nullable String currentVersion,
                                       @NonNull Callback callback) {
        Logging.i(TAG, "Checking updates for: " + modpackId + " (current: " + currentVersion + ")");
        // TODO: integrate with modpack API (CurseForge / Modrinth)
        callback.onNoUpdate();
    }
}
