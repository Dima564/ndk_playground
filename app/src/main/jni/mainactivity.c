#include <jni.h>
#include "stdlib.h"

JNIEXPORT jstring JNICALL
Java_smartdata_frame_MainActivity_getStringFromNative(JNIEnv *env, jobject instance) {

    // TODO


    return (*env)->NewStringUTF(env, "Hello, I'm native String");
}

JNIEXPORT jstring JNICALL
Java_smartdata_frame_MainActivity_withParams(JNIEnv *env, jobject instance, jstring param_) {
    char *param = (char *) (*env)->GetStringUTFChars(env, param_, 0);

    // TODO
    char s3[100] = "Native string is:";
    char* returnValue = strcat(s3, param);
    (*env)->ReleaseStringUTFChars(env, param_, param);


    return (*env)->NewStringUTF(env, returnValue);
}