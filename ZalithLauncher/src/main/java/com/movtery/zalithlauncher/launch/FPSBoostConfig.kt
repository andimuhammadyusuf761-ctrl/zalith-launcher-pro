package com.movtery.zalithlauncher.launch

import com.movtery.zalithlauncher.feature.log.Logging

/**
 * Zalith Remake FPS Boost Configuration
 * Version-specific JVM and environment variable optimizations
 * for Minecraft 1.8.x through 1.21.x
 *
 * IMPORTANT: -XX:+UnlockExperimentalVMOptions MUST come before any
 * experimental G1GC flags (G1NewSizePercent, G1MaxNewSizePercent,
 * G1MixedGCLiveThresholdPercent, G1RSetUpdatingPauseTimePercent)
 */
object FPSBoostConfig {

    data class BoostProfile(
        val name: String,
        val jvmArgs: List<String>,
        val envVars: Map<String, String>,
        val description: String
    )

    /**
     * Detect MC version range and return the optimal boost profile
     */
    fun getBoostProfile(versionName: String): BoostProfile {
        val ver = parseVersion(versionName)
        Logging.i("FPSBoost", "Detected MC version: $versionName -> parsed as $ver")

        return when {
            ver.first <= 12 -> getLegacyProfile()
            ver.first in 13..16 -> getModernProfile()
            ver.first in 17..19 -> getHeavyProfile()
            ver.first >= 20 -> getUltraProfile()
            else -> getDefaultProfile()
        }
    }

    private fun parseVersion(versionName: String): Pair<Int, Int> {
        try {
            val cleaned = versionName.replace(Regex("[^0-9.]"), " ").trim().split(" ")[0]
            val parts = cleaned.split(".")
            if (parts.size >= 2) {
                val minor = parts[1].toIntOrNull() ?: 0
                val patch = if (parts.size >= 3) parts[2].toIntOrNull() ?: 0 else 0
                return Pair(minor, patch)
            }
        } catch (e: Exception) {
            Logging.w("FPSBoost", "Failed to parse version: $versionName", e)
        }
        return Pair(0, 0)
    }

    /**
     * Legacy profile for MC 1.8.x - 1.12.x
     */
    private fun getLegacyProfile(): BoostProfile {
        return BoostProfile(
            name = "Legacy Boost (1.8-1.12)",
            description = "Optimized for older MC versions with lighter resource usage",
            jvmArgs = listOf(
                // MUST be first to unlock experimental G1 options
                "-XX:+UnlockExperimentalVMOptions",
                "-XX:+UseG1GC",
                "-XX:MaxGCPauseMillis=5",
                "-XX:G1NewSizePercent=30",
                "-XX:G1MaxNewSizePercent=70",
                "-XX:G1HeapRegionSize=4M",
                "-XX:G1ReservePercent=15",
                "-XX:G1HeapWastePercent=5",
                "-XX:G1MixedGCCountTarget=4",
                "-XX:InitiatingHeapOccupancyPercent=20",
                "-XX:G1MixedGCLiveThresholdPercent=90",
                "-XX:G1RSetUpdatingPauseTimePercent=5",
                "-XX:SurvivorRatio=32",
                "-XX:+PerfDisableSharedMem",
                "-XX:MaxTenuringThreshold=1",
                "-XX:+UseCompressedOops",
                "-XX:+OptimizeStringConcat",
                // Note: UseBiasedLocking removed in Java 19+ (don't add it back)
                "-XX:+AlwaysPreTouch",
                "-XX:+ParallelRefProcEnabled",
                "-XX:+DisableExplicitGC",
                "-XX:+TieredCompilation",
                "-Dfml.ignoreInvalidMinecraftCertificates=true",
                "-Dfml.ignorePatchDiscrepancies=true"
            ),
            envVars = emptyMap()
        )
    }

    /**
     * Modern profile for MC 1.13.x - 1.16.x
     */
    private fun getModernProfile(): BoostProfile {
        return BoostProfile(
            name = "Modern Boost (1.13-1.16)",
            description = "Balanced for post-flattening MC with moderate resources",
            jvmArgs = listOf(
                "-XX:+UnlockExperimentalVMOptions",
                "-XX:+UseG1GC",
                "-XX:MaxGCPauseMillis=8",
                "-XX:G1NewSizePercent=25",
                "-XX:G1MaxNewSizePercent=65",
                "-XX:G1HeapRegionSize=8M",
                "-XX:G1ReservePercent=20",
                "-XX:G1HeapWastePercent=5",
                "-XX:G1MixedGCCountTarget=4",
                "-XX:InitiatingHeapOccupancyPercent=15",
                "-XX:G1MixedGCLiveThresholdPercent=90",
                "-XX:G1RSetUpdatingPauseTimePercent=5",
                "-XX:SurvivorRatio=32",
                "-XX:+PerfDisableSharedMem",
                "-XX:MaxTenuringThreshold=1",
                "-XX:+UseCompressedOops",
                "-XX:+OptimizeStringConcat",
                "-XX:+UseStringDeduplication",
                // Note: UseBiasedLocking removed in Java 19+ (don't add it back)
                "-XX:+AlwaysPreTouch",
                "-XX:+ParallelRefProcEnabled",
                "-XX:+DisableExplicitGC",
                "-XX:+TieredCompilation",
                "-Dfml.ignoreInvalidMinecraftCertificates=true",
                "-Dfml.ignorePatchDiscrepancies=true"
            ),
            envVars = emptyMap()
        )
    }

    /**
     * Heavy profile for MC 1.17.x - 1.19.x
     */
    private fun getHeavyProfile(): BoostProfile {
        return BoostProfile(
            name = "Heavy Boost (1.17-1.19)",
            description = "Aggressive optimization for Caves & Cliffs era",
            jvmArgs = listOf(
                "-XX:+UnlockExperimentalVMOptions",
                "-XX:+UseG1GC",
                "-XX:MaxGCPauseMillis=8",
                "-XX:G1NewSizePercent=20",
                "-XX:G1MaxNewSizePercent=60",
                "-XX:G1HeapRegionSize=8M",
                "-XX:G1ReservePercent=20",
                "-XX:G1HeapWastePercent=5",
                "-XX:G1MixedGCCountTarget=4",
                "-XX:InitiatingHeapOccupancyPercent=15",
                "-XX:G1MixedGCLiveThresholdPercent=90",
                "-XX:G1RSetUpdatingPauseTimePercent=5",
                "-XX:SurvivorRatio=32",
                "-XX:+PerfDisableSharedMem",
                "-XX:MaxTenuringThreshold=1",
                "-XX:+UseCompressedOops",
                "-XX:+OptimizeStringConcat",
                "-XX:+UseStringDeduplication",
                // Note: UseBiasedLocking removed in Java 19+ (don't add it back)
                "-XX:+AlwaysPreTouch",
                "-XX:+ParallelRefProcEnabled",
                "-XX:+DisableExplicitGC",
                "-XX:ParallelGCThreads=4",
                "-XX:ConcGCThreads=2"
            ),
            envVars = emptyMap()
        )
    }

    /**
     * Ultra profile for MC 1.20.x - 1.21.x
     */
    private fun getUltraProfile(): BoostProfile {
        return BoostProfile(
            name = "Ultra Boost (1.20-1.21+)",
            description = "Maximum performance for latest MC versions",
            jvmArgs = listOf(
                "-XX:+UnlockExperimentalVMOptions",
                "-XX:+UseG1GC",
                "-XX:MaxGCPauseMillis=5",
                "-XX:G1NewSizePercent=20",
                "-XX:G1MaxNewSizePercent=60",
                "-XX:G1HeapRegionSize=16M",
                "-XX:G1ReservePercent=20",
                "-XX:G1HeapWastePercent=5",
                "-XX:G1MixedGCCountTarget=4",
                "-XX:InitiatingHeapOccupancyPercent=10",
                "-XX:G1MixedGCLiveThresholdPercent=90",
                "-XX:G1RSetUpdatingPauseTimePercent=5",
                "-XX:SurvivorRatio=32",
                "-XX:+PerfDisableSharedMem",
                "-XX:MaxTenuringThreshold=1",
                "-XX:+UseCompressedOops",
                "-XX:+OptimizeStringConcat",
                "-XX:+UseStringDeduplication",
                // Note: UseBiasedLocking removed in Java 19+ (don't add it back)
                "-XX:+AlwaysPreTouch",
                "-XX:+ParallelRefProcEnabled",
                "-XX:+DisableExplicitGC",
                "-XX:ParallelGCThreads=4",
                "-XX:ConcGCThreads=2",
                "-Djava.net.preferIPv4Stack=true",
                "-Dnetworkaddress.cache.ttl=60"
            ),
            // NOTE: LIBGL_* and MESA_* env vars are NOT set here because they
            // conflict with renderer plugins (MobileGlues, gl4es, Zink).
            // The renderer plugin system handles GL/driver env vars correctly.
            // Setting them here would override plugin settings and cause crashes.
            envVars = emptyMap()
        )
    }

    private fun getDefaultProfile(): BoostProfile {
        return getUltraProfile().copy(name = "Default Boost", description = "Generic FPS optimization")
    }

    /**
     * Common performance JVM flags (fallback when no version detected)
     */
    fun getCommonJvmFlags(): List<String> {
        return listOf(
            "-XX:+UnlockExperimentalVMOptions",
            "-XX:+UseG1GC",
            "-XX:MaxGCPauseMillis=10",
            "-XX:G1NewSizePercent=20",
            "-XX:G1MaxNewSizePercent=60",
            "-XX:G1HeapRegionSize=8M",
            "-XX:G1ReservePercent=20",
            "-XX:G1HeapWastePercent=5",
            "-XX:G1MixedGCCountTarget=4",
            "-XX:InitiatingHeapOccupancyPercent=15",
            "-XX:G1MixedGCLiveThresholdPercent=90",
            "-XX:G1RSetUpdatingPauseTimePercent=5",
            "-XX:SurvivorRatio=32",
            "-XX:+PerfDisableSharedMem",
            "-XX:MaxTenuringThreshold=1",
            "-XX:+UseCompressedOops",
            "-XX:+OptimizeStringConcat",
            "-XX:+UseStringDeduplication",
            // Note: UseBiasedLocking removed in Java 19+ (don't add it back)
            "-XX:+AlwaysPreTouch",
            "-XX:+ParallelRefProcEnabled",
            "-XX:+DisableExplicitGC"
        )
    }
}
