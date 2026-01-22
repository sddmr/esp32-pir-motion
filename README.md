# ESP32 HC-SR501 PIR Motion Sensor Test

This project demonstrates a **simple and reliable way** to use the  
**HC-SR501 PIR motion sensor** with an **ESP32**, without relying on any
third-party libraries.

The goal of this project is to understand the **raw behavior of the PIR sensor**
before building custom drivers or libraries.

---

## Hardware Used

- ESP32 Dev Module
- HC-SR501 PIR Motion Sensor
- Jumper wires

---

## Wiring

| HC-SR501 Pin | ESP32 Pin |
|-------------|-----------|
| VCC | 5V |
| GND | GND |
| OUT | GPIO18 |

**Note:**  
Some HC-SR501 clones behave unstably at 3.3V.  
For this reason, the sensor is powered with **5V** in this project.

---

## Hardware Setup Image

The image below shows the physical wiring of the components:

![PIR Sensor Connection](pic.jpg)

---

## Software

- PlatformIO
- Arduino framework
- No external libraries are used

---

## Core Logic

- The PIR sensor output is read using `digitalRead()`
- `HIGH` means motion detected
- `LOW` means no motion

To prevent floating input issues on ESP32 GPIO pins, the PIR pin is configured as:

```cpp
pinMode(PIR_PIN, INPUT_PULLDOWN);
````

This greatly reduces false motion detections.

---

## Project Structure

```
ESP32-PIR-Test/
│
├── src/
│   └── main.cpp
├── pic.jpg
├── platformio.ini
└── README.md
```

---

## Project Purpose

* Learn how PIR motion sensors work with ESP32
* Understand sensor–microcontroller data flow
* Create a solid base for writing a custom PIR sensor library

---

## Future Improvements

* Object-oriented PIR sensor class (.h / .cpp)
* Software-based debounce and time filtering
* Interrupt-based motion detection
* ESP32 deep sleep with PIR wake-up

---

## Notes

This project is intentionally kept **simple**.
The focus is on understanding how the sensor behaves rather than relying on
ready-made libraries.


