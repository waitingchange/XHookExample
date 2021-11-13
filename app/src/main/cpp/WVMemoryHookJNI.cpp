//
// Created by MacBookPro on 2021/11/9.
//

#include <jni.h>
#include "WVMemoryHook.h"

extern "C"
JNIEXPORT jboolean JNICALL Java_com_example_xhookdemo_NativeHandler_installHooksNative(JNIEnv *env, jobject thiz, jint sdk_ver,
                                                            jobject class_loader,
                                                            jboolean enable_debug) {
    // TODO: implement installHooksNative()
    return AOVHook::Install(env, sdk_ver, class_loader) ? JNI_TRUE : JNI_FALSE;
}