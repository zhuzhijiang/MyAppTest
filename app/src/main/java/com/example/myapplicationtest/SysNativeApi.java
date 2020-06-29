package com.example.myapplicationtest;

public class SysNativeApi {
    static {
        System.loadLibrary("native-lib");
    }

    public static native int getIntFromNative();
}
