#include <Arduino.h>

#define SOUND_SENSOR_DIGITAL 33
#define SOUND_SENSOR_ANALOG 32
#define ledPin 5 // Connect LED on pin 13, or use the onboard one

void setup()
{
    Serial.begin(115200);
    pinMode(ledPin, OUTPUT); // Set ledPin to output mode
    pinMode(SOUND_SENSOR_DIGITAL, INPUT);
    pinMode(SOUND_SENSOR_ANALOG, INPUT);
}

void loop()
{
    if (digitalRead(SOUND_SENSOR_DIGITAL) == HIGH)
    {
        // Read Touch sensor signal
        digitalWrite(ledPin, LOW); // if Touch sensor is HIGH, then turn on
    }
    else
    {
        digitalWrite(ledPin, HIGH); // if Touch sensor is LOW, then turn off the led
    }
    Serial.printf("Analog: %d \n", analogRead(SOUND_SENSOR_ANALOG));
}