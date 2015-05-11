#include <jni.h>
#include <mcpelauncher.h>
#include <dlfcn.h>
#include <android/log.h>

Tile::setShape(float, float, float, float, float, float); (Mangled Version: _ZN4Tile8setShapeEffffff);

JNIEXPORT jint JNI_OnLoad(JavaVM* vm, void* reserved) {
void* handle = dlopen("libminecraftpe.so", RTLD_LAZY);
dlerror();
// insert hooks here
const char* error = dlerror();
if(error) __android_log_print(ANDROID_LOG_INFO, TAG, "dlerror: %s", error);
return JNI_VERSION_1_2;
}
