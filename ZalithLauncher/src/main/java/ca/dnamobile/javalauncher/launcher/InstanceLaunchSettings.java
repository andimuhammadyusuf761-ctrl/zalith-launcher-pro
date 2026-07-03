package ca.dnamobile.javalauncher.launcher;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;

/** Per-instance launch settings (JVM args, resolution, renderer override). */
public final class InstanceLaunchSettings {
    @Nullable public final String jvmArgs;
    @Nullable public final String rendererOverride;
    public final int resolutionScalePercent;
    public final boolean forceFullscreen;

    public InstanceLaunchSettings(
            @Nullable String jvmArgs,
            @Nullable String rendererOverride,
            int resolutionScalePercent,
            boolean forceFullscreen) {
        this.jvmArgs = jvmArgs;
        this.rendererOverride = rendererOverride;
        this.resolutionScalePercent = resolutionScalePercent;
        this.forceFullscreen = forceFullscreen;
    }

    public static InstanceLaunchSettings defaults() {
        return new InstanceLaunchSettings(null, null, 100, false);
    }

    @NonNull @Override
    public String toString() {
        return "InstanceLaunchSettings{jvmArgs=" + jvmArgs
                + ", renderer=" + rendererOverride
                + ", scale=" + resolutionScalePercent + "%, fullscreen=" + forceFullscreen + "}";
    }
}
