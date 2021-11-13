package com.example.xhookdemo;

import android.os.Build;
import android.util.Log;

/**
 * Created by caikelun on 18/01/2018.
 */

public class NativeHandler {

    private static final NativeHandler ourInstance = new NativeHandler();
    private boolean mHookInstalled = false;

    public static NativeHandler getInstance() {
        return ourInstance;
    }

    private NativeHandler() {
    }

    public native int refresh(boolean async);

    public native void clear();

    public native void enableDebug(boolean flag);

    public native void enableSigSegvProtection(boolean flag);

    public boolean InitHook(boolean enableDebug) {
        int sdkInt = Build.VERSION.SDK_INT;
        Log.i("NativeHandler","Current sdk_int : "  + sdkInt);
        return installHooksNative(Build.VERSION.SDK_INT, this.getClass().getClassLoader(), enableDebug);
    }

    private native boolean installHooksNative(int sdkVer, ClassLoader classLoader, boolean enableDebug);
}
