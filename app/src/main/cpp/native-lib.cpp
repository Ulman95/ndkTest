#include <jni.h>
#include <string>

extern "C" JNIEXPORT void JNICALL
Java_com_rvv_test_ndkcrashlytics_MainActivity_killMe(JNIEnv *env, jobject) {
    throw std::exception();
}
