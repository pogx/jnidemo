// Dll1.cpp: 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "cn_itlz_sayhey_HelloJni.h"
JNIEXPORT void JNICALL Java_cn_itlz_sayhey_HelloJni_hello
(JNIEnv * env, jobject obj) {
	printf("hello this is my first jni program , it's include so many detils!");
}


