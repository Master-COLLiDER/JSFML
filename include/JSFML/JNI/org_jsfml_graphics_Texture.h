/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_jsfml_graphics_Texture */

#ifndef _Included_org_jsfml_graphics_Texture
#define _Included_org_jsfml_graphics_Texture
#ifdef __cplusplus
extern "C" {
#endif
/* Inaccessible static: debug */
/* Inaccessible static: numManaged */
/* Inaccessible static: numWrapped */
/*
 * Class:     org_jsfml_graphics_Texture
 * Method:    nativeCreate
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_jsfml_graphics_Texture_nativeCreate
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_Texture
 * Method:    nativeDelete
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Texture_nativeDelete
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_Texture
 * Method:    nativeCopy
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_jsfml_graphics_Texture_nativeCopy
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_Texture
 * Method:    create
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_org_jsfml_graphics_Texture_create
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_jsfml_graphics_Texture
 * Method:    nativeLoadFromMemory
 * Signature: ([BLorg/jsfml/graphics/IntRect;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_jsfml_graphics_Texture_nativeLoadFromMemory
  (JNIEnv *, jobject, jbyteArray, jobject);

/*
 * Class:     org_jsfml_graphics_Texture
 * Method:    nativeLoadFromImage
 * Signature: (Lorg/jsfml/graphics/Image;Lorg/jsfml/graphics/IntRect;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_jsfml_graphics_Texture_nativeLoadFromImage
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     org_jsfml_graphics_Texture
 * Method:    getSize
 * Signature: ()Lorg/jsfml/system/Vector2i;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_graphics_Texture_getSize
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_Texture
 * Method:    nativeCopyToImage
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_jsfml_graphics_Texture_nativeCopyToImage
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_Texture
 * Method:    nativeUpdate
 * Signature: (Lorg/jsfml/graphics/Image;II)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Texture_nativeUpdate__Lorg_jsfml_graphics_Image_2II
  (JNIEnv *, jobject, jobject, jint, jint);

/*
 * Class:     org_jsfml_graphics_Texture
 * Method:    nativeUpdate
 * Signature: (Lorg/jsfml/window/Window;II)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Texture_nativeUpdate__Lorg_jsfml_window_Window_2II
  (JNIEnv *, jobject, jobject, jint, jint);

/*
 * Class:     org_jsfml_graphics_Texture
 * Method:    nativeBind
 * Signature: (Lorg/jsfml/graphics/Texture$CoordinateType;)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Texture_nativeBind
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_jsfml_graphics_Texture
 * Method:    setSmooth
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Texture_setSmooth
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     org_jsfml_graphics_Texture
 * Method:    isSmooth
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_jsfml_graphics_Texture_isSmooth
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_Texture
 * Method:    setRepeated
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Texture_setRepeated
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     org_jsfml_graphics_Texture
 * Method:    isRepeated
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_jsfml_graphics_Texture_isRepeated
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
