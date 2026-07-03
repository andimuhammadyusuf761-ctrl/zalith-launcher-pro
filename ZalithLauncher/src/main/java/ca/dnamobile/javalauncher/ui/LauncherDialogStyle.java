package ca.dnamobile.javalauncher.ui;

import android.app.AlertDialog;
import android.content.Context;
import android.content.DialogInterface;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;

import com.google.android.material.dialog.MaterialAlertDialogBuilder;

/**
 * Provides DroidBridge-styled Material3 dialogs.
 * All alert dialogs in the launcher should go through this helper
 * to ensure a consistent look and feel.
 */
public final class LauncherDialogStyle {
    private LauncherDialogStyle() {}

    /** Build a Material3 styled alert dialog. */
    @NonNull
    public static MaterialAlertDialogBuilder builder(@NonNull Context context) {
        return new MaterialAlertDialogBuilder(context);
    }

    /** Show a simple message dialog with an OK button. */
    public static void showMessage(@NonNull Context context,
                                   @NonNull String title,
                                   @NonNull String message) {
        new MaterialAlertDialogBuilder(context)
                .setTitle(title)
                .setMessage(message)
                .setPositiveButton(android.R.string.ok, null)
                .show();
    }

    /** Show a confirmation dialog. */
    public static void showConfirm(@NonNull Context context,
                                   @NonNull String title,
                                   @NonNull String message,
                                   @NonNull String positiveLabel,
                                   @NonNull DialogInterface.OnClickListener onPositive) {
        new MaterialAlertDialogBuilder(context)
                .setTitle(title)
                .setMessage(message)
                .setPositiveButton(positiveLabel, onPositive)
                .setNegativeButton(android.R.string.cancel, null)
                .show();
    }
}
