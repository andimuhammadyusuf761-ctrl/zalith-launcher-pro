package ca.dnamobile.javalauncher.logs;

import android.content.Context;
import android.util.Log;

import androidx.annotation.NonNull;

import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Locale;

/** Writes structured diagnostic log entries to the DroidBridge launcher log file. */
public final class LauncherDiagnosticLog {
    private static final String TAG = "DBLauncherLog";
    private static final SimpleDateFormat FMT =
            new SimpleDateFormat("yyyy-MM-dd HH:mm:ss.SSS", Locale.ROOT);

    private LauncherDiagnosticLog() {}

    public static void write(@NonNull Context context, @NonNull String level,
                             @NonNull String tag, @NonNull String message) {
        if (!LauncherLogManager.isEnabled(context)) return;
        String line = FMT.format(new Date()) + " [" + level + "] [" + tag + "] " + message + "\n";
        try (BufferedWriter w = new BufferedWriter(
                new FileWriter(LauncherLogManager.getLogFile(context), true))) {
            w.write(line);
        } catch (IOException e) {
            Log.w(TAG, "Failed to write diagnostic log", e);
        }
    }
}
