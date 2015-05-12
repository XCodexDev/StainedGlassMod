#include <jni.h>
#include <mcpelauncher.h>
#include <dlfcn.h>
#include <android/log.h>
#include <string>

#include "Substrate.h"

Class Common {
public:
    std::string getGameVersionString;
};

// GameVersionString changed to *blah
// Also gonna add gui for the Credits Screen...
static std::string(*Common$getGameVersionString)();
static std::string Common$getGameVersionString() {
    return "Stained Glass Mod By The Gigabit Team";
}

static void(*Tile$initTile)();

JNIEXPORT jint JNI_OnLoad(JavaVM* vm, void* reserved) {
void* handle = dlopen("libminecraftpe.so", RTLD_LAZY);
dlerror();

MSHookFunction((void*) &Tile::initTile, (void*) &Tile$initTile, (void**) &_Tile$initTile);
MSHookFunction((void*) &Common::getGameVersionString, (void*) &Common$getGameVersionString, (void**) &_Common$getGameVersionString);

return JNI_VERSION_1_2;
}
