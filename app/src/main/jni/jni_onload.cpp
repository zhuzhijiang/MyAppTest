#include <jni.h>
#include "java_native_func_map.h"
//
// Created by Administrator on 2020/6/22.
//
JavaVM *g_jvm;
JNIEXPORT jint JNI_OnLoad(JavaVM *vm,void *reserved){
    JNIEnv* env;
    if (JNI_OK != vm->GetEnv(reinterpret_cast<void**> (&env),JNI_VERSION_1_4)) {
//        LOGW("JNI_OnLoad could not get JNI env");
        return JNI_ERR;
    }

    g_jvm = vm; //用于后面获取JNIEnv
    jclass clazz = env->FindClass("com/example/myapplicationtest/SysNativeApi");  //获取Java NativeLib类

    jint bres = env->RegisterNatives(clazz,jni_methods, sizeof(jni_methods)/ sizeof(JNINativeMethod));
    if(bres<0){
        return JNI_ERR;
    }

    return JNI_VERSION_1_4;
}
