#include <jni.h>
#include <string>
#include "class.h"
#include "game.h"
extern "C" JNIEXPORT jstring JNICALL
Java_com_gbmxdev_first_1c_1app_MainActivity_stringFromJNI( JNIEnv* env, jobject /* this */) {
    std::string hello = "Hello from C++";
    std::cout << "we stsarting main on game now\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    class_ player ;
    gen_char(&player);
    return env->NewStringUTF(hello.c_str());
}