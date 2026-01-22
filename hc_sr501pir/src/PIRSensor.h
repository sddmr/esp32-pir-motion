#ifndef PIR_SENSOR_H
#define PIR_SENSOR_H
#include <Arduino.h>

class PIRSensor{
public:
    PIRSensor(int pin);
    void begin();
    bool MotionDetected();
private:
    int _pin;

};

#endif // PIR_SENSOR_H
