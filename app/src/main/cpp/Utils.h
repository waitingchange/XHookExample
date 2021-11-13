//
// Created by MacBookPro on 2021/11/9.
//

#ifndef XHOOKDEMO_UTILS_H
#define XHOOKDEMO_UTILS_H

#include <string.h>
#include <inttypes.h>
#include <stdbool.h>
#include <android/log.h>

#define LOGV(tag, fmt, args...) \
  __android_log_print(ANDROID_LOG_VERBOSE, tag, fmt, ##args);

#define LOGD(tag, fmt, args...) \
     __android_log_print(ANDROID_LOG_DEBUG, tag, fmt, ##args);

#define LOGI(tag, fmt, args...) \
    __android_log_print(ANDROID_LOG_INFO, tag, fmt, ##args);

#define LOGW(tag, fmt, args...) \
   __android_log_print(ANDROID_LOG_WARN, tag, fmt, ##args);

#define LOGE(tag, fmt, args...) \
    __android_log_print(ANDROID_LOG_ERROR, tag, fmt, ##args);




#define EXPORT extern __attribute__ ((visibility ("default")))

#ifndef LIKELY
#define LIKELY(cond) (__builtin_expect(!!(cond), 1))
#endif

#ifndef UNLIKELY
#define UNLIKELY(cond) (__builtin_expect(!!(cond), 0))
#endif

#define NELEM(...) ((sizeof(__VA_ARGS__)) / (sizeof(__VA_ARGS__[0])))

#endif //XHOOKDEMO_UTILS_H
