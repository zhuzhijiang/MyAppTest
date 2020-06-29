//
// Created by Administrator on 2020/6/22.
//

#ifndef MYAPPLICATIONTEST_JAVA_NATIVE_FUNC_MAP_H
#define MYAPPLICATIONTEST_JAVA_NATIVE_FUNC_MAP_H
#include<jni.h>
#include "showmo_system.h"

JNINativeMethod jni_methods[] = {
    {
        "getIntFromNative",
        "()I",
        (void *) getIntFromJni
    }
};

#endif //MYAPPLICATIONTEST_JAVA_NATIVE_FUNC_MAP_H
