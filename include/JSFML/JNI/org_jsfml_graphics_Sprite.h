/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_jsfml_graphics_Sprite */

#ifndef _Included_org_jsfml_graphics_Sprite
#define _Included_org_jsfml_graphics_Sprite
#ifdef __cplusplus
extern "C" {
#endif
/* Inaccessible static: debug */
/* Inaccessible static: numManaged */
/* Inaccessible static: numWrapped */
/*
 * Class:     org_jsfml_graphics_Sprite
 * Method:    nativeCreate
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_jsfml_graphics_Sprite_nativeCreate
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_Sprite
 * Method:    nativeSetTexture
 * Signature: (Lorg/jsfml/graphics/Texture;)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Sprite_nativeSetTexture
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_jsfml_graphics_Sprite
 * Method:    nativeSetTextureRect
 * Signature: (Lorg/jsfml/graphics/IntRect;)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Sprite_nativeSetTextureRect
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_jsfml_graphics_Sprite
 * Method:    nativeSetColor
 * Signature: (Lorg/jsfml/graphics/Color;)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Sprite_nativeSetColor
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_jsfml_graphics_Sprite
 * Method:    getTextureRect
 * Signature: ()Lorg/jsfml/graphics/IntRect;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_graphics_Sprite_getTextureRect
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_Sprite
 * Method:    getColor
 * Signature: ()Lorg/jsfml/graphics/Color;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_graphics_Sprite_getColor
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_Sprite
 * Method:    getLocalBounds
 * Signature: ()Lorg/jsfml/graphics/FloatRect;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_graphics_Sprite_getLocalBounds
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_Sprite
 * Method:    getGlobalBounds
 * Signature: ()Lorg/jsfml/graphics/FloatRect;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_graphics_Sprite_getGlobalBounds
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_Sprite
 * Method:    setPosition
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Sprite_setPosition
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     org_jsfml_graphics_Sprite
 * Method:    setRotation
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Sprite_setRotation
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     org_jsfml_graphics_Sprite
 * Method:    setScale
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Sprite_setScale
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     org_jsfml_graphics_Sprite
 * Method:    setOrigin
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Sprite_setOrigin
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     org_jsfml_graphics_Sprite
 * Method:    getPosition
 * Signature: ()Lorg/jsfml/system/Vector2f;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_graphics_Sprite_getPosition
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_Sprite
 * Method:    getRotation
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_jsfml_graphics_Sprite_getRotation
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_Sprite
 * Method:    getScale
 * Signature: ()Lorg/jsfml/system/Vector2f;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_graphics_Sprite_getScale
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_Sprite
 * Method:    getOrigin
 * Signature: ()Lorg/jsfml/system/Vector2f;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_graphics_Sprite_getOrigin
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_Sprite
 * Method:    move
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Sprite_move
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     org_jsfml_graphics_Sprite
 * Method:    rotate
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Sprite_rotate
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     org_jsfml_graphics_Sprite
 * Method:    scale
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Sprite_scale
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     org_jsfml_graphics_Sprite
 * Method:    getTransform
 * Signature: ()Lorg/jsfml/graphics/Transform;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_graphics_Sprite_getTransform
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_Sprite
 * Method:    getInverseTransform
 * Signature: ()Lorg/jsfml/graphics/Transform;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_graphics_Sprite_getInverseTransform
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
