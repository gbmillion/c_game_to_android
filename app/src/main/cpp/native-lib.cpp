#include <jni.h>
#include <string>
#include "class.h"
#include "crypt.h"
#include "game.h"
extern "C" JNIEXPORT jstring JNICALL
Java_com_gbmxdev_first_1c_1app_MainActivity_stringFromJNI( JNIEnv* env, jobject /* this */) {
    std::string hello = "Hello from C++";
    main1();
    return env->NewStringUTF(hello.c_str());
}