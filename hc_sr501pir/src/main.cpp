#include <Arduino.h>
#include "PIRSensor.h"

PIRSensor pirSensor(18);



void setup() {
  Serial.begin(115200);
  pirSensor.begin();

  Serial.println("PIR Sensor ready.") ;


}

void loop() {
  bool motion = pirSensor.MotionDetected();

  if (motion) {
    Serial.println("Motion Detected!");
  }else{
    Serial.println("No Motion.");
  }
  delay(1000);
  


}

