// If you use the PlatformIo add this library
// #include <Arduino.h>
#include <BleKeyboard.h>

BleKeyboard bleKeyboard("My Hub", "Maker", 100);

#define previusTrack 15
#define playPause 5
#define nextTrack 4
#define volumeUP 22
#define volumeDown 19
#define volumeMute 21

void setup()
{
    bleKeyboard.begin();

    pinMode(previusTrack, INPUT);
    pinMode(playPause, INPUT);
    pinMode(nextTrack, INPUT);
    pinMode(volumeUP, INPUT);
    pinMode(volumeDown, INPUT);
    pinMode(volumeMute, INPUT);

    Serial.begin(115200);
}

void loop()
{

    int back = digitalRead(previusTrack);
    int play_pause = digitalRead(playPause);
    int next = digitalRead(nextTrack);
    int up = digitalRead(volumeUP);
    int down = digitalRead(volumeDown);
    int mute = digitalRead(volumeMute);

    Serial.printf("%d && %d\n", next, up);
    if (back == 0)
    {
        bleKeyboard.write(KEY_MEDIA_PREVIOUS_TRACK);
        delay(300);
    }
    else if (play_pause == 0)
    {
        bleKeyboard.write(KEY_MEDIA_PLAY_PAUSE);
        delay(300);
    }
    else if (next == 0)
    {
        bleKeyboard.write(KEY_MEDIA_NEXT_TRACK);
        delay(300);
    }
    else if (up == 0)
    {
        bleKeyboard.write(KEY_MEDIA_VOLUME_UP);
        delay(300);
    }
    else if (down == 0)
    {
        bleKeyboard.write(KEY_MEDIA_VOLUME_DOWN);
        delay(300);
    }
    else if (mute == 0)
    {
        bleKeyboard.write(KEY_MEDIA_MUTE);
        delay(300);
    }
    else
    {
    }
}
