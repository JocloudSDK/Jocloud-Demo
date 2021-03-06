# Android Samples for Jocloud Advanced Audio And Video Features
[中文](README.zh.md) | [English](README.md)
## 1 OverView
This Demo mainly describes how to quickly integrate the Jocloud Audio/Video SDK and the RTS SDK to implement:
- co-hosting in a room
- Co-hosting across rooms
- Video Publishing
- Audio Publishing
- Chat Room

See the project modules `video_samechannel` , `video_crosschannel`,`video_advanced`,`audio`,`chat_room` for the implementation logic.

## 2 Quick Start
### 2.1 Prerequisites
You must meet the following conditions before starting development:
- Android Studio 3.0 or above
- Android SDK API level 16 or above
- Supports mobile devices with Android 4.1 or above
- Valid Jocloud account (valid APPID)，See details in [Jocloud account](https://jocloud.com/en/reg), [AppID](https://docs.jocloud.com/cloud/en/platform/other/user_auth.html#e9a1b9e79bae-e4b88e-app-id)

### 2.2 Run the Demo
- Open the demo with Android Studio, connect to your Android device.
- modify com.aivacom.api.utils.Constant.java mAppId,add yours APPID
- build and run

## 3 FAQ
### 1. Integrate the SDK
- 1.Locate build.gradle from the root directory of the project, open it, and add maven source.
```js
buildscript {
    repositories {
        maven { url "http://nexus.sunclouds.com:8081/nexus/content/groups/public/" }
        ......
    }
}

allprojects {
    repositories {
        ......
        maven { url "http://nexus.sunclouds.com:8081/nexus/content/groups/public/" }
        ......
    }
}
```
- 2.Add the specified SDK version

```js
dependencies {
    implementation fileTree(dir: 'libs', include: ['*.jar'])
    //Add ThunderBolt SDK here, x.y.z refers to a specific SDK version, for example: 2.8.2
    implementation "com.rtc.thunder:thunderbolt:x.y.z"

    //Add RTS SDK here, x.y.z refers to a specific SDK version, for example:3.1.5
    implementation "com.hummer:hmr:x.y.z"
    implementation "com.hummer:rts:x.y.z"
    .....
}
```
- 3.Add permissions required by SDK to the used SDK modules:

```xml
<manifest xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:tools="http://schemas.android.com/tools"
    package="com.xxx.xxxx">
    .....
    //Add permissions
    <uses-permission android:name="android.permission.BLUETOOTH" />
    <uses-permission android:name="android.permission.BLUETOOTH_ADMIN" />
    <uses-permission android:name="android.permission.INTERNET" />
    <uses-permission android:name="android.permission.ACCESS_NETWORK_STATE" />
    <uses-permission android:name="android.permission.READ_PHONE_STATE" />
    <uses-permission android:name="android.permission.MODIFY_AUDIO_SETTINGS" />
    <uses-permission android:name="android.permission.RECORD_AUDIO" />
    <uses-permission android:name="android.permission.WRITE_EXTERNAL_STORAGE" />
    <uses-permission android:name="android.permission.READ_EXTERNAL_STORAGE" />
    <uses-permission android:name="android.permission.WAKE_LOCK" />
    <uses-permission android:name="android.permission.CAMERA" />

    //Add software features
    <uses-feature android:name="android.hardware.audio.low_latency" />
    <uses-feature android:name="android.hardware.audio.pro" />
    <uses-feature android:name="android.hardware.microphone" android:required="true" />
    <uses-feature android:name="android.hardware.camera.autofocus" />
    <uses-feature android:name="android.hardware.camera" android:required="true" />
    <uses-feature android:name="android.hardware.camera.front" android:required="true" />
</manifest>
```
- 4.Prevent code obfuscation

If code obfuscation is enabled during application compilation, the obfuscation must be prevented. Add the following information to the rule file proguard-rules.pro (/app/proguard-rules.pro) to prevent mixing public names in the library:

```js
-keep class com.rtc.thunder.** { *; }
-keep class org.webrtc.audioengine.** { *; }
-keep class com.yy.yyvideolib.** { *; }
-keep class com.yy.yyvideoplayer.** { *; }
-keep class com.yy.android.medialibrary.audiocodec.** { *; }
```

## 4 Contact Us
- For full API manual, refer to:[Developer Center](https://docs.jocloud.com/en).
- For more demos, refer to:[SDK and Demo Download](https://docs.jocloud.com/download).
- If you have pre-sales consultation questions, you can call: +86-020-82120482 or contact email: marketing@jocloud.com.

