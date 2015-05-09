#include "com_cabatuan_nativejnisample_MainActivity.h"
/*
 * Class:     com_cabatuan_nativejnisample_MainActivity
 * Method:    getStringFromNative
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_cabatuan_nativejnisample_MainActivity_getStringFromNative
  (JNIEnv * env, jobject obj)
{
   return (*env)->NewStringUTF(env,"Hello from JNI");
}