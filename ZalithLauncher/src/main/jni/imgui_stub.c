/*
 * Zalith Remake: ImGUI ARM64 Stub Library
 * Auto-generated no-op stubs for imgui-java native methods.
 * This allows ImGUI-based mods to load on Android ARM64 without crashing.
 * Actual ImGUI rendering is not supported - this provides graceful degradation.
 */
#include <jni.h>
#include <android/log.h>
#include <string.h>
#include <stdlib.h>

#define TAG "ImGuiStub"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, TAG, __VA_ARGS__)
#define LOGW(...) __android_log_print(ANDROID_LOG_WARN, TAG, __VA_ARGS__)

static int initialized = 0;

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *vm, void *reserved) {
    LOGI("ImGUI ARM64 stub loaded (Zalith Remake FPS Boost)");
    LOGI("ImGUI rendering is not supported on Android - mod will load but GUI won't render");
    return JNI_VERSION_1_6;
}

JNIEXPORT void JNICALL JNI_OnUnload(JavaVM *vm, void *reserved) {
    LOGI("ImGUI ARM64 stub unloaded");
}

/* ===== Auto-generated no-op stubs for imgui.ImGui native methods ===== */

JNIEXPORT void JNICALL Java_imgui_ImGui_nInitJni(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jlong JNICALL Java_imgui_ImGui_nCreateContext(JNIEnv *env, jclass clazz) {
    return 0;
}

JNIEXPORT jlong JNICALL Java_imgui_ImGui_nCreateContext____J__J(JNIEnv *env, jclass clazz) {
    return 0;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_destroyContext(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nDestroyContext(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jlong JNICALL Java_imgui_ImGui_nGetCurrentContext(JNIEnv *env, jclass clazz) {
    return 0;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetCurrentContext(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setAssertCallback(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jlong JNICALL Java_imgui_ImGui_nGetIO(JNIEnv *env, jclass clazz) {
    return 0;
}

JNIEXPORT jlong JNICALL Java_imgui_ImGui_nGetStyle(JNIEnv *env, jclass clazz) {
    return 0;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_newFrame(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_endFrame(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_render(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jlong JNICALL Java_imgui_ImGui_nGetDrawData(JNIEnv *env, jclass clazz) {
    return 0;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_showDemoWindow(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nShowDemoWindow(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_showMetricsWindow(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nShowMetricsWindow(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_showStackToolWindow(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nShowStackToolWindow(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_showAboutWindow(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nShowAboutWindow(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_showStyleEditor(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nShowStyleEditor(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_showStyleSelector(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_showFontSelector(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_showUserGuide(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jstring JNICALL Java_imgui_ImGui_getVersion(JNIEnv *env, jclass clazz) {
    return (*env)->NewStringUTF(env, "");
}

JNIEXPORT void JNICALL Java_imgui_ImGui_styleColorsDark(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nStyleColorsDark(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_styleColorsLight(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nStyleColorsLight(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_styleColorsClassic(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nStyleColorsClassic(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_begin(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBegin(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBegin____Ljava_lang_String_2_3ZI__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_end(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_beginChild(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_beginChild____Ljava_lang_String_2FF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_beginChild____Ljava_lang_String_2FFZ__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_beginChild____Ljava_lang_String_2FFZI__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_beginChild____I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_beginChild____IFFZ__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_beginChild____IFFZI__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_endChild(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_isWindowAppearing(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_isWindowCollapsed(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_isWindowFocused(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_isWindowFocused____I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_isWindowHovered(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_isWindowHovered____I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jlong JNICALL Java_imgui_ImGui_nGetWindowDrawList(JNIEnv *env, jclass clazz) {
    return 0;
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getWindowDpiScale(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_getWindowPos(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getWindowPosX(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getWindowPosY(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_getWindowSize(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getWindowSizeX(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getWindowSizeY(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getWindowWidth(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getWindowHeight(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT jlong JNICALL Java_imgui_ImGui_nGetWindowViewport(JNIEnv *env, jclass clazz) {
    return 0;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setNextWindowPos(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setNextWindowPos____FFI__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setNextWindowPos____FFIFF__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setNextWindowSize(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setNextWindowSize____FFI__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setNextWindowSizeConstraints(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setNextWindowContentSize(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setNextWindowCollapsed(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setNextWindowCollapsed____ZI__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setNextWindowFocus(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setNextWindowBgAlpha(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setNextWindowViewport(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setWindowPos(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setWindowPos____FFI__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setWindowSize(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setWindowSize____FFI__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setWindowCollapsed(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setWindowCollapsed____ZI__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setWindowFocus(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setWindowFontScale(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setWindowPos____Ljava_lang_String_2FF__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setWindowPos____Ljava_lang_String_2FFI__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setWindowSize____Ljava_lang_String_2FF__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setWindowSize____Ljava_lang_String_2FFI__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setWindowCollapsed____Ljava_lang_String_2Z__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setWindowCollapsed____Ljava_lang_String_2ZI__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setWindowFocus____Ljava_lang_String_2__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_getContentRegionAvail(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getContentRegionAvailX(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getContentRegionAvailY(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_getContentRegionMax(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getContentRegionMaxX(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getContentRegionMaxY(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_getWindowContentRegionMin(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getWindowContentRegionMinX(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getWindowContentRegionMinY(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_getWindowContentRegionMax(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getWindowContentRegionMaxX(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getWindowContentRegionMaxY(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getScrollX(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getScrollY(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setScrollX(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setScrollY(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getScrollMaxX(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getScrollMaxY(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setScrollHereX(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setScrollHereX____F__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setScrollHereY(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setScrollHereY____F__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setScrollFromPosX(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setScrollFromPosX____FF__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setScrollFromPosY(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setScrollFromPosY____FF__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nPushFont(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_popFont(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_pushStyleColor(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_pushStyleColor____IIIII__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_pushStyleColor____II__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_popStyleColor(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_popStyleColor____I__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_pushStyleVar(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_pushStyleVar____IFF__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_popStyleVar(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_popStyleVar____I__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_pushAllowKeyboardFocus(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_popAllowKeyboardFocus(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_pushButtonRepeat(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_popButtonRepeat(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_pushItemWidth(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_popItemWidth(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setNextItemWidth(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_calcItemWidth(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_pushTextWrapPos(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_pushTextWrapPos____F__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_popTextWrapPos(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jlong JNICALL Java_imgui_ImGui_nGetFont(JNIEnv *env, jclass clazz) {
    return 0;
}

JNIEXPORT jint JNICALL Java_imgui_ImGui_getFontSize(JNIEnv *env, jclass clazz) {
    return 0;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_getFontTexUvWhitePixel(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getFontTexUvWhitePixelX(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getFontTexUvWhitePixelY(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT jint JNICALL Java_imgui_ImGui_getColorU32(JNIEnv *env, jclass clazz) {
    return 0;
}

JNIEXPORT jint JNICALL Java_imgui_ImGui_getColorU32____IF__I(JNIEnv *env, jclass clazz) {
    return 0;
}

JNIEXPORT jint JNICALL Java_imgui_ImGui_getColorU32____FFFF__I(JNIEnv *env, jclass clazz) {
    return 0;
}

JNIEXPORT jint JNICALL Java_imgui_ImGui_getColorU32i(JNIEnv *env, jclass clazz) {
    return 0;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_getStyleColorVec4(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_separator(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_sameLine(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_sameLine____F__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_sameLine____FF__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_newLine(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_spacing(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_dummy(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_indent(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_indent____F__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_unindent(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_unindent____F__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_beginGroup(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_endGroup(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_getCursorPos(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getCursorPosX(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getCursorPosY(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setCursorPos(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setCursorPosX(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setCursorPosY(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_getCursorStartPos(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getCursorStartPosX(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getCursorStartPosY(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_getCursorScreenPos(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getCursorScreenPosX(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getCursorScreenPosY(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setCursorScreenPos(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_alignTextToFramePadding(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getTextLineHeight(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getTextLineHeightWithSpacing(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getFrameHeight(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getFrameHeightWithSpacing(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_pushID(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_pushID____Ljava_lang_String_2Ljava_lang_String_2__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_pushID____J__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_pushID____I__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_popID(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jint JNICALL Java_imgui_ImGui_getID(JNIEnv *env, jclass clazz) {
    return 0;
}

JNIEXPORT jint JNICALL Java_imgui_ImGui_getID____Ljava_lang_String_2Ljava_lang_String_2__I(JNIEnv *env, jclass clazz) {
    return 0;
}

JNIEXPORT jint JNICALL Java_imgui_ImGui_getID____J__I(JNIEnv *env, jclass clazz) {
    return 0;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_textUnformatted(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_text(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_textColored(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_textColored____IIIILjava_lang_String_2__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_textColored____ILjava_lang_String_2__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_textDisabled(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_textWrapped(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_labelText(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_bulletText(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_button(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_button____Ljava_lang_String_2FF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_smallButton(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_invisibleButton(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_invisibleButton____Ljava_lang_String_2FFI__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_arrowButton(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_image(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_image____IFFFF__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_image____IFFFFFF__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_image____IFFFFFFFFFF__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_image____IFFFFFFFFFFFFFF__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_imageButton(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_imageButton____IFFFF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_imageButton____IFFFFFF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_imageButton____IFFFFFFI__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_imageButton____IFFFFFFIFFFF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_imageButton____IFFFFFFIFFFFFFFF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_checkbox(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nCheckbox(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nCheckboxFlags(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_radioButton(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nRadioButton(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_progressBar(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_progressBar____FFF__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_progressBar____FFFLjava_lang_String_2__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_bullet(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_beginCombo(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_beginCombo____Ljava_lang_String_2Ljava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_endCombo(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nCombo(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nCombo____Ljava_lang_String_2_3ILjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragFloat(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragFloat____Ljava_lang_String_2_3FF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragFloat____Ljava_lang_String_2_3FFFF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragFloat____Ljava_lang_String_2_3FFFFLjava_lang_String_2__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragFloat____Ljava_lang_String_2_3FFFFLjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragFloat2(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragFloat2____Ljava_lang_String_2_3FF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragFloat2____Ljava_lang_String_2_3FFF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragFloat2____Ljava_lang_String_2_3FFFF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragFloat2____Ljava_lang_String_2_3FFFFLjava_lang_String_2__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragFloat2____Ljava_lang_String_2_3FFFFLjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragFloat3(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragFloat3____Ljava_lang_String_2_3FF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragFloat3____Ljava_lang_String_2_3FFF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragFloat3____Ljava_lang_String_2_3FFFF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragFloat3____Ljava_lang_String_2_3FFFFLjava_lang_String_2__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragFloat3____Ljava_lang_String_2_3FFFFLjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragFloat4(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragFloat4____Ljava_lang_String_2_3FF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragFloat4____Ljava_lang_String_2_3FFF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragFloat4____Ljava_lang_String_2_3FFFF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragFloat4____Ljava_lang_String_2_3FFFFLjava_lang_String_2__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragFloat4____Ljava_lang_String_2_3FFFFLjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragFloatRange2(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragFloatRange2____Ljava_lang_String_2_3F_3FF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragFloatRange2____Ljava_lang_String_2_3F_3FFF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragFloatRange2____Ljava_lang_String_2_3F_3FFFF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragFloatRange2____Ljava_lang_String_2_3F_3FFFFLjava_lang_String_2__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragFloatRange2____Ljava_lang_String_2_3F_3FFFFLjava_lang_String_2Ljava_lang_String_2__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragFloatRange2____Ljava_lang_String_2_3F_3FFFFLjava_lang_String_2Ljava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragInt(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragInt____Ljava_lang_String_2_3IF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragInt____Ljava_lang_String_2_3IFF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragInt____Ljava_lang_String_2_3IFFF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragInt____Ljava_lang_String_2_3IFFFLjava_lang_String_2__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragInt2(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragInt2____Ljava_lang_String_2_3IF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragInt2____Ljava_lang_String_2_3IFF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragInt2____Ljava_lang_String_2_3IFFF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragInt2____Ljava_lang_String_2_3IFFFLjava_lang_String_2__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragInt3(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragInt3____Ljava_lang_String_2_3IF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragInt3____Ljava_lang_String_2_3IFF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragInt3____Ljava_lang_String_2_3IFFF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragInt3____Ljava_lang_String_2_3IFFFLjava_lang_String_2__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragInt4(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragInt4____Ljava_lang_String_2_3IF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragInt4____Ljava_lang_String_2_3IFF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragInt4____Ljava_lang_String_2_3IFFF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragInt4____Ljava_lang_String_2_3IFFFLjava_lang_String_2__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragIntRange2(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragIntRange2____Ljava_lang_String_2_3I_3IF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragIntRange2____Ljava_lang_String_2_3I_3IFF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragIntRange2____Ljava_lang_String_2_3I_3IFFF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragIntRange2____Ljava_lang_String_2_3I_3IFFFLjava_lang_String_2__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_dragIntRange2____Ljava_lang_String_2_3I_3IFFFLjava_lang_String_2Ljava_lang_String_2__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar____Ljava_lang_String_2I_3IFI__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar____Ljava_lang_String_2I_3IFII__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar____Ljava_lang_String_2I_3IFIILjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar____Ljava_lang_String_2I_3FF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar____Ljava_lang_String_2I_3FFF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar____Ljava_lang_String_2I_3FFFF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar____Ljava_lang_String_2I_3FFFFLjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar____Ljava_lang_String_2I_3DF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar____Ljava_lang_String_2I_3DFD__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar____Ljava_lang_String_2I_3DFDD__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar____Ljava_lang_String_2I_3DFDDLjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar____Ljava_lang_String_2I_3JF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar____Ljava_lang_String_2I_3JFJ__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar____Ljava_lang_String_2I_3JFJJ__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar____Ljava_lang_String_2I_3JFJJLjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar____Ljava_lang_String_2I_3SF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar____Ljava_lang_String_2I_3SFS__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar____Ljava_lang_String_2I_3SFSS__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalar____Ljava_lang_String_2I_3SFSSLjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN____Ljava_lang_String_2I_3IIFI__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN____Ljava_lang_String_2I_3IIFII__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN____Ljava_lang_String_2I_3IIFIILjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN____Ljava_lang_String_2I_3FIF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN____Ljava_lang_String_2I_3FIFF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN____Ljava_lang_String_2I_3FIFFF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN____Ljava_lang_String_2I_3FIFFFLjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN____Ljava_lang_String_2I_3DIF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN____Ljava_lang_String_2I_3DIFD__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN____Ljava_lang_String_2I_3DIFDD__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN____Ljava_lang_String_2I_3DIFDDLjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN____Ljava_lang_String_2I_3JIF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN____Ljava_lang_String_2I_3JIFJ__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN____Ljava_lang_String_2I_3JIFJJ__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN____Ljava_lang_String_2I_3JIFJJLjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN____Ljava_lang_String_2I_3SIF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN____Ljava_lang_String_2I_3SIFS__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN____Ljava_lang_String_2I_3SIFSS__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nDragScalarN____Ljava_lang_String_2I_3SIFSSLjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_sliderFloat(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_sliderFloat____Ljava_lang_String_2_3FFFLjava_lang_String_2__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_sliderFloat____Ljava_lang_String_2_3FFFLjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_sliderFloat2(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_sliderFloat2____Ljava_lang_String_2_3FFFLjava_lang_String_2__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_sliderFloat2____Ljava_lang_String_2_3FFFLjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_sliderFloat3(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_sliderFloat3____Ljava_lang_String_2_3FFFLjava_lang_String_2__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_sliderFloat3____Ljava_lang_String_2_3FFFLjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_sliderFloat4(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_sliderFloat4____Ljava_lang_String_2_3FFFLjava_lang_String_2__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_sliderFloat4____Ljava_lang_String_2_3FFFLjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_sliderAngle(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_sliderAngle____Ljava_lang_String_2_3FF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_sliderAngle____Ljava_lang_String_2_3FFF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_sliderAngle____Ljava_lang_String_2_3FFFLjava_lang_String_2__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_sliderInt(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_sliderInt____Ljava_lang_String_2_3IIILjava_lang_String_2__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_sliderInt2(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_sliderInt2____Ljava_lang_String_2_3IIILjava_lang_String_2__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_sliderInt3(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_sliderInt3____Ljava_lang_String_2_3IIILjava_lang_String_2__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_sliderInt4(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_sliderInt4____Ljava_lang_String_2_3IIILjava_lang_String_2__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalar(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalar____Ljava_lang_String_2I_3IIILjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalar____Ljava_lang_String_2I_3FFF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalar____Ljava_lang_String_2I_3FFFLjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalar____Ljava_lang_String_2I_3JJJ__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalar____Ljava_lang_String_2I_3JJJLjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalar____Ljava_lang_String_2I_3DDD__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalar____Ljava_lang_String_2I_3DDDLjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalar____Ljava_lang_String_2I_3SSS__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalar____Ljava_lang_String_2I_3SSSLjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalarN(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalarN____Ljava_lang_String_2II_3IIILjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalarN____Ljava_lang_String_2II_3FFF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalarN____Ljava_lang_String_2II_3FFFLjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalarN____Ljava_lang_String_2II_3JJJ__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalarN____Ljava_lang_String_2II_3JJJLjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalarN____Ljava_lang_String_2II_3DDD__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalarN____Ljava_lang_String_2II_3DDDLjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalarN____Ljava_lang_String_2II_3SSS__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSliderScalarN____Ljava_lang_String_2II_3SSSLjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_vSliderFloat(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_vSliderFloat____Ljava_lang_String_2FF_3FFFLjava_lang_String_2__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_vSliderFloat____Ljava_lang_String_2FF_3FFFLjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_vSliderInt(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_vSliderInt____Ljava_lang_String_2FF_3IIILjava_lang_String_2__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nVSliderScalar(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nVSliderScalar____Ljava_lang_String_2FFI_3IIILjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nVSliderScalar____Ljava_lang_String_2FFI_3FFF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nVSliderScalar____Ljava_lang_String_2FFI_3FFFLjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nVSliderScalar____Ljava_lang_String_2FFI_3JJJ__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nVSliderScalar____Ljava_lang_String_2FFI_3JJJLjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nVSliderScalar____Ljava_lang_String_2FFI_3DDD__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nVSliderScalar____Ljava_lang_String_2FFI_3DDDLjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nVSliderScalar____Ljava_lang_String_2FFI_3SSS__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nVSliderScalar____Ljava_lang_String_2FFI_3SSSLjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nInitInputTextData(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputText(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputFloat(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_inputFloat2(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_inputFloat2____Ljava_lang_String_2_3FLjava_lang_String_2__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_inputFloat2____Ljava_lang_String_2_3FLjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_inputFloat3(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_inputFloat3____Ljava_lang_String_2_3FLjava_lang_String_2__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_inputFloat3____Ljava_lang_String_2_3FLjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_inputFloat4(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_inputFloat4____Ljava_lang_String_2_3FLjava_lang_String_2__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_inputFloat4____Ljava_lang_String_2_3FLjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputInt(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_inputInt2(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_inputInt2____Ljava_lang_String_2_3II__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_inputInt3(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_inputInt3____Ljava_lang_String_2_3II__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_inputInt4(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_inputInt4____Ljava_lang_String_2_3II__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputDouble(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar____Ljava_lang_String_2I_3II__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar____Ljava_lang_String_2I_3III__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar____Ljava_lang_String_2I_3IIILjava_lang_String_2__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar____Ljava_lang_String_2I_3IIILjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar____Ljava_lang_String_2I_3F__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar____Ljava_lang_String_2I_3FF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar____Ljava_lang_String_2I_3FFF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar____Ljava_lang_String_2I_3FFFLjava_lang_String_2__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar____Ljava_lang_String_2I_3FFFLjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar____Ljava_lang_String_2I_3J__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar____Ljava_lang_String_2I_3JJ__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar____Ljava_lang_String_2I_3JJJ__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar____Ljava_lang_String_2I_3JJJLjava_lang_String_2__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar____Ljava_lang_String_2I_3JJJLjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar____Ljava_lang_String_2I_3D__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar____Ljava_lang_String_2I_3DD__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar____Ljava_lang_String_2I_3DDD__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar____Ljava_lang_String_2I_3DDDLjava_lang_String_2__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar____Ljava_lang_String_2I_3DDDLjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar____Ljava_lang_String_2I_3S__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar____Ljava_lang_String_2I_3SS__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar____Ljava_lang_String_2I_3SSS__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar____Ljava_lang_String_2I_3SSSLjava_lang_String_2__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalar____Ljava_lang_String_2I_3SSSLjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN____Ljava_lang_String_2I_3III__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN____Ljava_lang_String_2I_3IIII__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN____Ljava_lang_String_2I_3IIIILjava_lang_String_2__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN____Ljava_lang_String_2I_3IIIILjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN____Ljava_lang_String_2I_3FI__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN____Ljava_lang_String_2I_3FIF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN____Ljava_lang_String_2I_3FIFF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN____Ljava_lang_String_2I_3FIFFLjava_lang_String_2__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN____Ljava_lang_String_2I_3FIFFLjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN____Ljava_lang_String_2I_3JI__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN____Ljava_lang_String_2I_3JIJ__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN____Ljava_lang_String_2I_3JIJJ__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN____Ljava_lang_String_2I_3JIJJLjava_lang_String_2__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN____Ljava_lang_String_2I_3JIJJLjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN____Ljava_lang_String_2I_3DI__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN____Ljava_lang_String_2I_3DID__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN____Ljava_lang_String_2I_3DIDD__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN____Ljava_lang_String_2I_3DIDDLjava_lang_String_2__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN____Ljava_lang_String_2I_3DIDDLjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN____Ljava_lang_String_2I_3SI__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN____Ljava_lang_String_2I_3SIS__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN____Ljava_lang_String_2I_3SISS__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN____Ljava_lang_String_2I_3SISSLjava_lang_String_2__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nInputScalarN____Ljava_lang_String_2I_3SISSLjava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_colorEdit3(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_colorEdit3____Ljava_lang_String_2_3FI__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_colorEdit4(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_colorEdit4____Ljava_lang_String_2_3FI__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_colorPicker3(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_colorPicker3____Ljava_lang_String_2_3FI__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_colorPicker4(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_colorPicker4____Ljava_lang_String_2_3FI__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_colorPicker4____Ljava_lang_String_2_3FIF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_colorButton(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_colorButton____Ljava_lang_String_2_3FI__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_colorButton____Ljava_lang_String_2_3FIFF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setColorEditOptions(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_treeNode(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_treeNode____Ljava_lang_String_2Ljava_lang_String_2__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_treeNode____JLjava_lang_String_2__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_treeNodeEx(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_treeNodeEx____Ljava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_treeNodeEx____Ljava_lang_String_2ILjava_lang_String_2__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_treeNodeEx____JILjava_lang_String_2__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_treePush(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_treePush____Ljava_lang_String_2__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_treePush____J__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_treePop(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getTreeNodeToLabelSpacing(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_collapsingHeader(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_collapsingHeader____Ljava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nCollapsingHeader(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setNextItemOpen(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setNextItemOpen____ZI__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_selectable(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_selectable____Ljava_lang_String_2Z__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_selectable____Ljava_lang_String_2ZI__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_selectable____Ljava_lang_String_2ZIFF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSelectable(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_beginListBox(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_beginListBox____Ljava_lang_String_2FF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_endListBox(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nListBox(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_plotLines(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_plotLines____Ljava_lang_String_2_3FII__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_plotLines____Ljava_lang_String_2_3FIILjava_lang_String_2__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_plotLines____Ljava_lang_String_2_3FIILjava_lang_String_2F__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_plotLines____Ljava_lang_String_2_3FIILjava_lang_String_2FF__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_plotLines____Ljava_lang_String_2_3FIILjava_lang_String_2FFFF__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_plotLines____Ljava_lang_String_2_3FIILjava_lang_String_2FFFFI__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_plotHistogram(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_plotHistogram____Ljava_lang_String_2_3FII__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_plotHistogram____Ljava_lang_String_2_3FIILjava_lang_String_2__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_plotHistogram____Ljava_lang_String_2_3FIILjava_lang_String_2F__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_plotHistogram____Ljava_lang_String_2_3FIILjava_lang_String_2FF__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_plotHistogram____Ljava_lang_String_2_3FIILjava_lang_String_2FFFF__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_plotHistogram____Ljava_lang_String_2_3FIILjava_lang_String_2FFFFI__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_value(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_value____Ljava_lang_String_2I__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_value____Ljava_lang_String_2J__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_value____Ljava_lang_String_2F__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_value____Ljava_lang_String_2FLjava_lang_String_2__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_beginMenuBar(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_endMenuBar(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_beginMainMenuBar(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_endMainMenuBar(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_beginMenu(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_beginMenu____Ljava_lang_String_2Z__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_endMenu(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_menuItem(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nMenuItem(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nMenuItem____Ljava_lang_String_2Ljava_lang_String_2_3ZZ__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_beginTooltip(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_endTooltip(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setTooltip(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_beginPopup(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_beginPopup____Ljava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_beginPopupModal(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginPopupModal(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginPopupModal____Ljava_lang_String_2_3ZI__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_endPopup(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_openPopup(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_openPopup____Ljava_lang_String_2I__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_openPopupOnItemClick(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_openPopupOnItemClick____Ljava_lang_String_2__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_openPopupOnItemClick____I__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_openPopupOnItemClick____Ljava_lang_String_2I__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_closeCurrentPopup(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_beginPopupContextItem(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_beginPopupContextItem____Ljava_lang_String_2__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_beginPopupContextItem____I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_beginPopupContextItem____Ljava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_beginPopupContextWindow(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_beginPopupContextWindow____Ljava_lang_String_2__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_beginPopupContextWindow____I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_beginPopupContextWindow____Ljava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_beginPopupContextVoid(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_beginPopupContextVoid____Ljava_lang_String_2__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_beginPopupContextVoid____I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_beginPopupContextVoid____Ljava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_isPopupOpen(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_isPopupOpen____Ljava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_beginTable(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_beginTable____Ljava_lang_String_2II__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_beginTable____Ljava_lang_String_2IIFF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_beginTable____Ljava_lang_String_2IIFFF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_endTable(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_tableNextRow(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_tableNextRow____I__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_tableNextRow____IF__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_tableNextColumn(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_tableSetColumnIndex(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_tableSetupColumn(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_tableSetupColumn____Ljava_lang_String_2I__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_tableSetupColumn____Ljava_lang_String_2IF__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_tableSetupColumn____Ljava_lang_String_2IFI__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_tableSetupScrollFreeze(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_tableHeadersRow(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_tableHeader(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jint JNICALL Java_imgui_ImGui_tableGetColumnCount(JNIEnv *env, jclass clazz) {
    return 0;
}

JNIEXPORT jint JNICALL Java_imgui_ImGui_tableGetColumnIndex(JNIEnv *env, jclass clazz) {
    return 0;
}

JNIEXPORT jint JNICALL Java_imgui_ImGui_tableGetRowIndex(JNIEnv *env, jclass clazz) {
    return 0;
}

JNIEXPORT jstring JNICALL Java_imgui_ImGui_tableGetColumnName(JNIEnv *env, jclass clazz) {
    return (*env)->NewStringUTF(env, "");
}

JNIEXPORT jstring JNICALL Java_imgui_ImGui_tableGetColumnName____I__Ljava_lang_String_2(JNIEnv *env, jclass clazz) {
    return (*env)->NewStringUTF(env, "");
}

JNIEXPORT jint JNICALL Java_imgui_ImGui_tableGetColumnFlags(JNIEnv *env, jclass clazz) {
    return 0;
}

JNIEXPORT jint JNICALL Java_imgui_ImGui_tableGetColumnFlags____I__I(JNIEnv *env, jclass clazz) {
    return 0;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_tableSetBgColor(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_tableSetBgColor____III__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_columns(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_columns____I__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_columns____ILjava_lang_String_2__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_columns____ILjava_lang_String_2Z__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nextColumn(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jint JNICALL Java_imgui_ImGui_getColumnIndex(JNIEnv *env, jclass clazz) {
    return 0;
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getColumnWidth(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getColumnWidth____I__F(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setColumnWidth(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getColumnOffset(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getColumnOffset____I__F(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setColumnOffset(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jint JNICALL Java_imgui_ImGui_getColumnsCount(JNIEnv *env, jclass clazz) {
    return 0;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_beginTabBar(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_beginTabBar____Ljava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_endTabBar(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_beginTabItem(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginTabItem(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nBeginTabItem____Ljava_lang_String_2_3ZI__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_endTabItem(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_tabItemButton(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_tabItemButton____Ljava_lang_String_2I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setTabItemClosed(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jint JNICALL Java_imgui_ImGui_nDockSpace(JNIEnv *env, jclass clazz) {
    return 0;
}

JNIEXPORT jint JNICALL Java_imgui_ImGui_nDockSpaceOverViewport(JNIEnv *env, jclass clazz) {
    return 0;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setNextWindowDockID(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setNextWindowDockID____II__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetNextWindowClass(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jint JNICALL Java_imgui_ImGui_getWindowDockID(JNIEnv *env, jclass clazz) {
    return 0;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_isWindowDocked(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_logToTTY(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_logToTTY____I__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_logToFile(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_logToFile____I__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_logToFile____ILjava_lang_String_2__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_logToClipboard(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_logToClipboard____I__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_logFinish(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_logButtons(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_logText(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_beginDragDropSource(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_beginDragDropSource____I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nSetDragDropPayload(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_endDragDropSource(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_beginDragDropTarget(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nAcceptDragDropPayload(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_endDragDropTarget(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nHasDragDropPayload(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_nHasDragDropPayload____Ljava_lang_String_2__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_beginDisabled(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_endDisabled(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_pushClipRect(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_popClipRect(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setItemDefaultFocus(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setKeyboardFocusHere(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setKeyboardFocusHere____I__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_isItemHovered(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_isItemHovered____I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_isItemActive(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_isItemFocused(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_isItemClicked(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_isItemClicked____I__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_isItemVisible(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_isItemEdited(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_isItemActivated(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_isItemDeactivated(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_isItemDeactivatedAfterEdit(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_isItemToggledOpen(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_isAnyItemHovered(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_isAnyItemActive(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_isAnyItemFocused(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_getItemRectMin(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getItemRectMinX(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getItemRectMinY(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_getItemRectMax(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getItemRectMaxX(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getItemRectMaxY(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_getItemRectSize(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getItemRectSizeX(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getItemRectSizeY(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setItemAllowOverlap(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jlong JNICALL Java_imgui_ImGui_nGetMainViewport(JNIEnv *env, jclass clazz) {
    return 0;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_isRectVisible(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_isRectVisible____FFFF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jdouble JNICALL Java_imgui_ImGui_getTime(JNIEnv *env, jclass clazz) {
    return 0.0;
}

JNIEXPORT jint JNICALL Java_imgui_ImGui_getFrameCount(JNIEnv *env, jclass clazz) {
    return 0;
}

JNIEXPORT jlong JNICALL Java_imgui_ImGui_nGetBackgroundDrawList(JNIEnv *env, jclass clazz) {
    return 0;
}

JNIEXPORT jlong JNICALL Java_imgui_ImGui_nGetForegroundDrawList(JNIEnv *env, jclass clazz) {
    return 0;
}

JNIEXPORT jlong JNICALL Java_imgui_ImGui_nGetBackgroundDrawList____J__J(JNIEnv *env, jclass clazz) {
    return 0;
}

JNIEXPORT jlong JNICALL Java_imgui_ImGui_nGetForegroundDrawList____J__J(JNIEnv *env, jclass clazz) {
    return 0;
}

JNIEXPORT jstring JNICALL Java_imgui_ImGui_getStyleColorName(JNIEnv *env, jclass clazz) {
    return (*env)->NewStringUTF(env, "");
}

JNIEXPORT void JNICALL Java_imgui_ImGui_nSetStateStorage(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jlong JNICALL Java_imgui_ImGui_nGetStateStorage(JNIEnv *env, jclass clazz) {
    return 0;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_beginChildFrame(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_beginChildFrame____IFFI__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_endChildFrame(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_calcTextSize(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_calcTextSize____Limgui_ImVec2_2Ljava_lang_String_2Z__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_calcTextSize____Limgui_ImVec2_2Ljava_lang_String_2F__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_calcTextSize____Limgui_ImVec2_2Ljava_lang_String_2ZF__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_colorConvertU32ToFloat4(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jint JNICALL Java_imgui_ImGui_colorConvertFloat4ToU32(JNIEnv *env, jclass clazz) {
    return 0;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_colorConvertRGBtoHSV(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_colorConvertHSVtoRGB(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jint JNICALL Java_imgui_ImGui_getKeyIndex(JNIEnv *env, jclass clazz) {
    return 0;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_isKeyDown(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_isKeyPressed(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_isKeyPressed____IZ__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_isKeyReleased(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_getKeyPressedAmount(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_captureKeyboardFromApp(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_captureKeyboardFromApp____Z__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_isMouseDown(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_isAnyMouseDown(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_isMouseClicked(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_isMouseClicked____IZ__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_isMouseDoubleClicked(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jint JNICALL Java_imgui_ImGui_getMouseClickedCount(JNIEnv *env, jclass clazz) {
    return 0;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_isMouseReleased(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_isMouseDragging(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_isMouseDragging____IF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_isMouseHoveringRect(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_isMouseHoveringRect____FFFFZ__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_isMousePosValid(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT jboolean JNICALL Java_imgui_ImGui_isMousePosValid____FF__Z(JNIEnv *env, jclass clazz) {
    return JNI_FALSE;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_getMousePos(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getMousePosX(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getMousePosY(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_getMousePosOnOpeningCurrentPopup(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getMousePosOnOpeningCurrentPopupX(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getMousePosOnOpeningCurrentPopupY(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_getMouseDragDelta(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getMouseDragDeltaX(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getMouseDragDeltaY(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_getMouseDragDelta____Limgui_ImVec2_2I__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getMouseDragDeltaX____I__F(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getMouseDragDeltaY____I__F(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_getMouseDragDelta____Limgui_ImVec2_2IF__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getMouseDragDeltaX____IF__F(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT jfloat JNICALL Java_imgui_ImGui_getMouseDragDeltaY____IF__F(JNIEnv *env, jclass clazz) {
    return 0.0f;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_resetMouseDragDelta(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_resetMouseDragDelta____I__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jint JNICALL Java_imgui_ImGui_getMouseCursor(JNIEnv *env, jclass clazz) {
    return 0;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setMouseCursor(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_captureMouseFromApp(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_captureMouseFromApp____Z__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jstring JNICALL Java_imgui_ImGui_getClipboardText(JNIEnv *env, jclass clazz) {
    return (*env)->NewStringUTF(env, "");
}

JNIEXPORT void JNICALL Java_imgui_ImGui_setClipboardText(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_loadIniSettingsFromDisk(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_loadIniSettingsFromMemory(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_loadIniSettingsFromMemory____Ljava_lang_String_2I__V(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_saveIniSettingsToDisk(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jstring JNICALL Java_imgui_ImGui_saveIniSettingsToMemory(JNIEnv *env, jclass clazz) {
    return (*env)->NewStringUTF(env, "");
}

JNIEXPORT jstring JNICALL Java_imgui_ImGui_saveIniSettingsToMemory____J__Ljava_lang_String_2(JNIEnv *env, jclass clazz) {
    return (*env)->NewStringUTF(env, "");
}

JNIEXPORT jlong JNICALL Java_imgui_ImGui_nGetPlatformIO(JNIEnv *env, jclass clazz) {
    return 0;
}

JNIEXPORT void JNICALL Java_imgui_ImGui_updatePlatformWindows(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_renderPlatformWindowsDefault(JNIEnv *env, jclass clazz) {
}

JNIEXPORT void JNICALL Java_imgui_ImGui_destroyPlatformWindows(JNIEnv *env, jclass clazz) {
}

JNIEXPORT jlong JNICALL Java_imgui_ImGui_nFindViewportByID(JNIEnv *env, jclass clazz) {
    return 0;
}

JNIEXPORT jlong JNICALL Java_imgui_ImGui_nFindViewportByPlatformHandle(JNIEnv *env, jclass clazz) {
    return 0;
}

