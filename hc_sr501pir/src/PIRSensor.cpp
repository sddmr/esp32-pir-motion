#include <Arduino.h>
#include "PIRSensor.h"

PIRSensor::PIRSensor(int pin) : _pin(pin) {
}

void PIRSensor::begin() {
    pinMode(_pin, INPUT);
}

bool PIRSensor::MotionDetected() {
    return digitalRead(_pin) == HIGH;
}