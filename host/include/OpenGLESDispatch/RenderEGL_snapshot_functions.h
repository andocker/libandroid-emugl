// Auto-generated with: android/scripts/gen-entries.py --mode=functions android/android-emugl/host/libs/libOpenGLESDispatch/render_egl_snapshot.entries --output=android/android-emugl/host/include/OpenGLESDispatch/RenderEGL_snapshot_functions.h
// DO NOT EDIT THIS FILE

#ifndef RENDER_EGL_SNAPSHOT_FUNCTIONS_H
#define RENDER_EGL_SNAPSHOT_FUNCTIONS_H

#define LIST_RENDER_EGL_SNAPSHOT_FUNCTIONS(X) \
  X(EGLConfig, eglLoadConfig, (EGLDisplay display, EGLStream stream)) \
  X(EGLContext, eglLoadContext, (EGLDisplay display, const EGLint * attrib_list, EGLStream stream)) \
  X(EGLBoolean, eglLoadAllImages, (EGLDisplay display, EGLStream stream, const void* textureLoader)) \
  X(EGLBoolean, eglSaveConfig, (EGLDisplay display, EGLConfig config, EGLStream stream)) \
  X(EGLBoolean, eglSaveContext, (EGLDisplay display, EGLContext context, EGLStream stream)) \
  X(EGLBoolean, eglSaveAllImages, (EGLDisplay display, EGLStream stream, const void* textureSaver)) \
  X(EGLBoolean, eglPreSaveContext, (EGLDisplay display, EGLContext contex, EGLStream stream)) \
  X(EGLBoolean, eglPostLoadAllImages, (EGLDisplay display, EGLStream stream)) \
  X(EGLBoolean, eglPostSaveContext, (EGLDisplay display, EGLConfig config, EGLStream stream)) \
  X(void, eglUseOsEglApi, (EGLBoolean enable)) \
  X(void, eglSetMaxGLESVersion, (EGLint glesVersion)) \
  X(void, eglFillUsages, (void* usages)) \


#endif  // RENDER_EGL_SNAPSHOT_FUNCTIONS_H
