#include <JSFML/JNI/org_jsfml_graphics_Font.h>

#include <JSFML/Intercom/Glyph.hpp>
#include <JSFML/Intercom/NativeObject.hpp>

#include <SFML/Graphics/Font.hpp>

/*
 * Class:     org_jsfml_graphics_Font
 * Method:    nativeGetDefaultFont
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_jsfml_graphics_Font_nativeGetDefaultFont (JNIEnv *env, jclass cls) {
    return (jlong)&sf::Font::GetDefaultFont();
}

/*
 * Class:     org_jsfml_graphics_Font
 * Method:    nativeCreate
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_jsfml_graphics_Font_nativeCreate (JNIEnv *env, jobject obj) {
    return (jlong)new sf::Font();
}

/*
 * Class:     org_jsfml_graphics_Font
 * Method:    nativeCopy
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_jsfml_graphics_Font_nativeCopy (JNIEnv *env, jobject obj) {
    return (jlong)new sf::Font(*THIS(sf::Font));
}

/*
 * Class:     org_jsfml_graphics_Font
 * Method:    nativeLoadFromMemory
 * Signature: ([B)Z
 */
JNIEXPORT jboolean JNICALL Java_org_jsfml_graphics_Font_nativeLoadFromMemory
    (JNIEnv *env, jobject obj, jbyteArray arr) {

    std::size_t n = (std::size_t)env->GetArrayLength(arr);
    jbyte* mem = env->GetByteArrayElements(arr, 0);

    jboolean result = THIS(sf::Font)->LoadFromMemory(mem, n);

    env->ReleaseByteArrayElements(arr, mem, 0);
    return result;
}

/*
 * Class:     org_jsfml_graphics_Font
 * Method:    getGlyph
 * Signature: (IIZ)Lorg/jsfml/graphics/Glyph;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_graphics_Font_getGlyph
    (JNIEnv *env, jobject obj, jint unicode, jint size, jboolean bold) {

    return JSFML::Glyph::FromSFML(env, THIS(sf::Font)->GetGlyph((sf::Uint32)unicode, size, bold));
}

/*
 * Class:     org_jsfml_graphics_Font
 * Method:    getKerning
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_org_jsfml_graphics_Font_getKerning
    (JNIEnv *env, jobject obj, jint first, jint second, jint size) {

    return THIS(sf::Font)->GetKerning((sf::Uint32)first, (sf::Uint32)second, size);
}

/*
 * Class:     org_jsfml_graphics_Font
 * Method:    getLineSpacing
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_jsfml_graphics_Font_getLineSpacing
    (JNIEnv *env, jobject obj, jint size) {

    return THIS(sf::Font)->GetLineSpacing(size);
}

/*
 * Class:     org_jsfml_graphics_Font
 * Method:    nativeGetTexture
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_org_jsfml_graphics_Font_nativeGetTexture
    (JNIEnv *env, jobject obj, jint size) {

    return (jlong)&THIS(sf::Font)->GetTexture(size);
}