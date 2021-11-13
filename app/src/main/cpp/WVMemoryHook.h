//
// Created by MacBookPro on 2021/11/9.
//

#ifndef XHOOKDEMO_WVMEMORYHOOK_H
#define XHOOKDEMO_WVMEMORYHOOK_H
#include <stdio.h>
#include <unistd.h>
#include <atomic>
#include <mutex>
#include <pthread.h>
#include <jni.h>
#include <string.h>

namespace AOVHook {
    bool Install(JNIEnv* env, jint sdk_ver, jobject classloader);
}

#endif //XHOOKDEMO_WVMEMORYHOOK_H
