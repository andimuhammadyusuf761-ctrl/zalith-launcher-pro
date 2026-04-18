# Zalith Remake - FPS Boost Edition

A modified version of [ZalithLauncher](https://github.com/ZalithLauncher/ZalithLauncher) optimized for maximum FPS performance when running Minecraft Java Edition on Android.

## What's Changed

### FPS Boost Optimizations
- **Optimized JVM Garbage Collection**: G1GC with aggressive tuning for minimal pause times (10ms target)
- **JIT Compilation Optimizations**: Compressed Oops, String deduplication, optimized string concatenation
- **GL4ES Performance Flags**: VBO usage, fast math, batch rendering, VAO caching
- **Mesa/Zink Optimizations**: GLSL caching, no-error mode, lazy descriptors, GL 4.6 override
- **Memory Management**: Pre-touch allocation, parallel reference processing, disabled explicit GC
- **Big Core Affinity**: Enabled by default for better CPU scheduling
- **Optimized Default Resolution**: 80% scaling for better FPS/quality balance
- **Sustained Performance Mode**: Enabled by default to prevent thermal throttling

### GUI Improvements
- **Modern Color Scheme**: Teal-ocean theme (light) and slate-teal theme (dark mode)
- **Elevated Top Bar**: Subtle shadow and depth for the navigation bar
- **Rounded Menu Items**: Modern ripple-effect cards with 10dp corner radius
- **Enhanced Play Button**: Bold teal button with elevation shadow and rounded corners
- **Improved Card Design**: Elevated cards with subtle border strokes
- **Better Typography**: Enhanced text contrast and sizing
- **Smoother Spacing**: Optimized padding and margins across all menu items

### Technical Details

#### JVM Flags Added
```
-XX:+UseG1GC -XX:MaxGCPauseMillis=10 -XX:G1NewSizePercent=20
-XX:G1MaxNewSizePercent=60 -XX:G1HeapRegionSize=8M
-XX:G1ReservePercent=20 -XX:InitiatingHeapOccupancyPercent=15
-XX:+UseCompressedOops -XX:+OptimizeStringConcat
-XX:+UseStringDeduplication -XX:+AlwaysPreTouch
-XX:+ParallelRefProcEnabled -XX:+DisableExplicitGC
```

#### Environment Variables Optimized
```
LIBGL_USEVBO=1, LIBGL_FASTMATH=1, LIBGL_BATCH=1
MESA_GL_VERSION_OVERRIDE=4.6, MESA_NO_ERROR=1
ZINK_DESCRIPTORS=lazy, MESA_GLSL_CACHE_DISABLE=false
```

## Build

```bash
chmod +x gradlew
./gradlew jre_lwjgl3glfw:build --no-daemon
./gradlew ZalithLauncher:assembleDebug -Darch=arm64
```

## Credits

- Original: [ZalithLauncher](https://github.com/ZalithLauncher/ZalithLauncher)
- FPS Boost & GUI Remake by Sittirahmadia
- Built with assistance from [Raccoon AI](https://raccoonai.tech)

## License

Licensed under GPL-3.0 - same as the original ZalithLauncher.
