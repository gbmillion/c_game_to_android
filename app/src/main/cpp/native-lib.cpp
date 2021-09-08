#include <jni.h>
#include <string>
#include "class.h"
#include "game.h"
extern "C" JNIEXPORT jstring JNICALL
Java_com_gbmxdev_first_1c_1app_MainActivity_stringFromJNI( JNIEnv* env, jobject /* this */) {
    std::string hello = "Hello from C++";
    std::cout << "we stsarting main on game now\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    class_ player ;
    /*
     * testing out game methods use to be c function
     *
void item(struct item invent[100]);
void itemdb( struct item db[255]);//needs work
     */
    gen_char(&player);
    trap(&player.hp);
    step(&player.hp,player.inventory);
    use(&player);
    potion( &player.Strength, player.Wisdom);
    combat(&player.hp, 100, &player);
    return env->NewStringUTF(hello.c_str());
}