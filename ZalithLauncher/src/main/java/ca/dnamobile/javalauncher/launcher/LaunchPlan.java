package ca.dnamobile.javalauncher.launcher;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;

import java.util.List;

/**
 * A fully-resolved launch plan ready to hand to the JRE.
 * Produced by combining instance settings, renderer config, and FPS-boost JVM flags.
 */
public final class LaunchPlan {
    @NonNull public final List<String> jvmArgs;
    @NonNull public final String rendererIdentifier;
    public final int resolutionScalePercent;
    public final boolean forceFullscreen;
    @Nullable public final String customMainClass;

    public LaunchPlan(
            @NonNull List<String> jvmArgs,
            @NonNull String rendererIdentifier,
            int resolutionScalePercent,
            boolean forceFullscreen,
            @Nullable String customMainClass) {
        this.jvmArgs = jvmArgs;
        this.rendererIdentifier = rendererIdentifier;
        this.resolutionScalePercent = resolutionScalePercent;
        this.forceFullscreen = forceFullscreen;
        this.customMainClass = customMainClass;
    }

    @NonNull @Override
    public String toString() {
        return "LaunchPlan{renderer=" + rendererIdentifier
                + ", scale=" + resolutionScalePercent
                + "%, jvmArgs=" + jvmArgs.size() + " args}";
    }
}
