package ca.dnamobile.javalauncher.logs;

import android.content.Context;
import android.content.SharedPreferences;

import androidx.annotation.NonNull;

import java.io.File;

/** Manages DroidBridge launcher-side diagnostic log files. */
public final class LauncherLogManager {
    private static final String PREFS = "launcher_preferences";
    private static final String KEY_ENABLED = "launcher_diagnostic_logs";

    private LauncherLogManager() {}

    public static boolean isEnabled(@NonNull Context context) {
        return context.getSharedPreferences(PREFS, Context.MODE_PRIVATE)
                .getBoolean(KEY_ENABLED, false);
    }

    public static void setEnabled(@NonNull Context context, boolean enabled) {
        context.getSharedPreferences(PREFS, Context.MODE_PRIVATE)
                .edit().putBoolean(KEY_ENABLED, enabled).apply();
    }

    @NonNull
    public static File getLogFile(@NonNull Context context) {
        return new File(context.getFilesDir(), "droidbridge_launcher.log");
    }

    /** Delete old log files to reclaim storage. */
    public static void clearLogs(@NonNull Context context) {
        File f = getLogFile(context);
        if (f.exists()) f.delete();
    }
}
