# Motion Detection System using Arduino and PIR Sensor

A simple Embedded Systems project that detects motion using an Arduino Uno and a PIR (Passive Infrared) motion sensor. When motion is detected, an LED turns ON and the detection status is displayed on the Serial Monitor.

---

## Features

- Motion detection using a PIR sensor
- LED indication when motion is detected
- Real-time status displayed on the Serial Monitor
- Arduino programming using C/C++
- Simulated using Tinkercad Circuit

---

## Components Used

- Arduino Uno
- PIR Motion Sensor (HC-SR501)
- LED
- 220 Ω Resistor
- Breadboard
- Jumper Wires

---

## Circuit Diagram

Upload your circuit image as `circuit.png` and display it here:

```markdown
![Circuit Diagram](circuit.png)
```

---

## Working Principle

1. The PIR sensor continuously monitors changes in infrared radiation.
2. When a person or object moves within its detection range, the sensor outputs a HIGH signal.
3. The Arduino reads this signal through a digital input pin.
4. If motion is detected:
   - The LED turns ON.
   - "Motion Detected!" is displayed on the Serial Monitor.
5. If no motion is detected:
   - The LED turns OFF.
   - "No Motion" is displayed on the Serial Monitor.

---

## Circuit Connections

| Component | Arduino Pin |
|-----------|-------------|
| PIR OUT | D2 |
| PIR VCC | 5V |
| PIR GND | GND |
| LED | D12 |
| LED GND | GND |

---

## Software Used

- Arduino IDE
- Tinkercad Circuits

---

## Project Structure

```
Motion-Detection-System/
│
├── README.md
├── Motion_Detection_System.ino
├── circuit.png
└── output.png
```

---

## Output

Upload your Serial Monitor screenshot as `output.png` and display it here:

```markdown
![Output](output.png)
```

---

## Applications

- Home security systems
- Intruder detection
- Automatic lighting systems
- Smart homes
- Office security
- Motion-activated devices

---

## Future Improvements

- Add an LCD/OLED display
- Include a buzzer alarm
- Send notifications using ESP32
- Capture images using a camera module
- Cloud-based monitoring

---

## Author

**ASWIN S**

---

## License

This project is licensed under the MIT License.
