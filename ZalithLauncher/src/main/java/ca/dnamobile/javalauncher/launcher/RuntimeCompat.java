package ca.dnamobile.javalauncher.launcher;

import android.content.Context;

import androidx.annotation.NonNull;

import ca.dnamobile.javalauncher.feature.log.Logging;
import net.kdt.pojavlaunch.Architecture;

/**
 * Runtime compatibility checks — determines which JRE version and flags
 * are compatible with the current device and Minecraft version.
 */
public final class RuntimeCompat {
    private static final String TAG = "RuntimeCompat";

    private RuntimeCompat() {}

    /** Returns true if the device supports Generational ZGC (requires JRE 21+, 64-bit). */
    public static boolean supportsGenerationalZGC(@NonNull Context context) {
        boolean is64Bit = Architecture.is64BitsDevice();
        Logging.i(TAG, "64-bit device: " + is64Bit);
        return is64Bit;
    }

    /** Returns the recommended minimum heap size in MB for this device. */
    public static int recommendedMinHeapMb(@NonNull Context context) {
        android.app.ActivityManager am =
                (android.app.ActivityManager) context.getSystemService(Context.ACTIVITY_SERVICE);
        if (am == null) return 512;
        long totalMb = am.getMemoryClass();
        return (int) Math.max(512, Math.min(totalMb * 4, 2048));
    }
}
