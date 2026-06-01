# touch_sensor_esp32
This repository consists of esp-32 projects and their integration with sensors and servo motors.

## ESP32-Desciption

ESP32 is a single 2.4 GHz Wi-Fi-and-Bluetooth SoC (System On a Chip) designed by Espressif Systems.
The specific microcontroller used here is the DOIT ESP32 Devkit V1.

## Esp-32 Pin Layout

<p>
  <img src="71kEWzr29bL._AC_SL1001_.jpg" alt="esp32_layout" width="100%"/>
</p>

## Librabries needed
-ESP32servo
-ExpressIf Boards Library

## Code Overview
The code allows for the rotation of the servo motor to 90 degrees while the touch sensor is pressed.GPIO Pins (touch_sensor:4 servo_motor:16)
