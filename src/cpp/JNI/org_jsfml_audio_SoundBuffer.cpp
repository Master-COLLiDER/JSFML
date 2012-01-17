#include <JSFML/JNI/org_jsfml_audio_SoundBuffer.h>

#include <JSFML/Intercom/JavaString.hpp>
#include <JSFML/Intercom/NativeObject.hpp>

#include <SFML/Audio/SoundBuffer.hpp>

/*
 * Class:     org_jsfml_audio_SoundBuffer
 * Method:    nativeCreate
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_jsfml_audio_SoundBuffer_nativeCreate (JNIEnv *env, jobject obj) {
    return (jlong)new sf::SoundBuffer();
}

/*
 * Class:     org_jsfml_audio_SoundBuffer
 * Method:    nativeCopy
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_jsfml_audio_SoundBuffer_nativeCopy (JNIEnv *env, jobject obj) {
    return (jlong)new sf::SoundBuffer(*THIS(sf::SoundBuffer));
}

/*
 * Class:     org_jsfml_audio_SoundBuffer
 * Method:    nativeLoadFromMemory
 * Signature: ([B)Z
 */
JNIEXPORT jboolean JNICALL Java_org_jsfml_audio_SoundBuffer_nativeLoadFromMemory (JNIEnv *env, jobject obj, jbyteArray arr) {
    std::size_t n = (std::size_t)env->GetArrayLength(arr);
    jbyte* mem = env->GetByteArrayElements(arr, 0);

    jboolean result = THIS(sf::SoundBuffer)->LoadFromMemory(mem, n);

    env->ReleaseByteArrayElements(arr, mem, 0);
    return result;
}

/*
 * Class:     org_jsfml_audio_SoundBuffer
 * Method:    nativeLoadFromSamples
 * Signature: ([SII)Z
 */
JNIEXPORT jboolean JNICALL Java_org_jsfml_audio_SoundBuffer_nativeLoadFromSamples
    (JNIEnv *env, jobject obj, jshortArray arr, jint channelCount, jint sampleRate) {

    std::size_t n = (std::size_t)env->GetArrayLength(arr);
    jshort* samples = env->GetShortArrayElements(arr, 0);

    jboolean result = THIS(sf::SoundBuffer)->LoadFromSamples(
        (sf::Int16*)samples, n, channelCount, sampleRate);

    env->ReleaseShortArrayElements(arr, samples, 0);
    return result;
}

/*
 * Class:     org_jsfml_audio_SoundBuffer
 * Method:    nativeSaveToFile
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_jsfml_audio_SoundBuffer_nativeSaveToFile (JNIEnv *env, jobject obj, jstring fileName) {
    return THIS(sf::SoundBuffer)->SaveToFile(std::string(JavaString::getUTF8(env, fileName)));
}

/*
 * Class:     org_jsfml_audio_SoundBuffer
 * Method:    getSamples
 * Signature: ()[S
 */
JNIEXPORT jshortArray JNICALL Java_org_jsfml_audio_SoundBuffer_getSamples (JNIEnv *env, jobject obj) {
    sf::SoundBuffer* soundBuffer = THIS(sf::SoundBuffer);

    std::size_t n = soundBuffer->GetSampleCount();
    const sf::Int16* samples = soundBuffer->GetSamples();

    jshortArray arr = env->NewShortArray(n);
    env->SetShortArrayRegion(arr, 0, n, (jshort*)samples);
    //env->ReleaseShortArrayElements(arr, (jshort*)samples, 0);

    return arr;
}

/*
 * Class:     org_jsfml_audio_SoundBuffer
 * Method:    getSampleCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_jsfml_audio_SoundBuffer_getSampleCount (JNIEnv *env, jobject obj) {
    return THIS(sf::SoundBuffer)->GetSampleCount();
}

/*
 * Class:     org_jsfml_audio_SoundBuffer
 * Method:    getSampleRate
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_jsfml_audio_SoundBuffer_getSampleRate (JNIEnv *env, jobject obj) {
    return THIS(sf::SoundBuffer)->GetSampleRate();
}

/*
 * Class:     org_jsfml_audio_SoundBuffer
 * Method:    getChannelCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_jsfml_audio_SoundBuffer_getChannelCount (JNIEnv *env, jobject obj) {
   return THIS(sf::SoundBuffer)->GetChannelCount();
}

/*
 * Class:     org_jsfml_audio_SoundBuffer
 * Method:    getDuration
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_jsfml_audio_SoundBuffer_getDuration (JNIEnv *env, jobject obj) {
    return (jlong)THIS(sf::SoundBuffer)->GetDuration();
}