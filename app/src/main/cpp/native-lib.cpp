#include <jni.h>
#include <string>
#include "class.h"
#include "game.h"
extern "C" JNIEXPORT jstring JNICALL
Java_com_gbmxdev_first_1c_1app_MainActivity_stringFromJNI( JNIEnv* env, jobject /* this */) {
    std::string hello = "Dungeon crawler in C++";
    class_ player ;
    /*
     * items need to be redone
     * need to fix output
     * need to gather input
     * */
    //hello = gen_char(&player);
    //hello = trap(&player.hp);//crashes
    //hello = step(&player.hp,player.inventory);//crashes
    //hello = use(&player);
    //hello = potion( &player.Strength, player.Wisdom); //hangs
    //hello = combat(&player.hp, 100, &player); //crashes
    hello = main1();
    return env->NewStringUTF(hello.c_str());
}