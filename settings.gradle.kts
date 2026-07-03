pluginManagement {
    repositories {
        gradlePluginPortal()
        google()
        maven("https://jitpack.io")
    }
}

dependencyResolutionManagement {
    repositoriesMode.set(RepositoriesMode.PREFER_SETTINGS)
    repositories {
        google()
        mavenCentral()
        maven("https://jitpack.io")
    }
}

rootProject.name = "Zalith Launcher"
include(":jre_lwjgl3glfw")
include(":ZalithLauncher")
