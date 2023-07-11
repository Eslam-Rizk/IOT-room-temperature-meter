# Project Overview

 The project is an IoT-based solution for monitoring any area temperature. The project uses a temperature sensor along with a Wi-Fi module to provide required data over a web-based user interface. The system is designed to provide real-time temperature over a web server accessed by the wifi module IP address. The user can view live temperature data of  any specific area.

# Hardware Components

* PIC16f877A 8-bit MCU
* LM35 temperature sensor
* ESP8266 wifi module
* usb-to-ttl converter
* picket2 programmer
* 10k ohm resistor
* 2 22uf ceramic capacitor
* 8MHZ crystall oscillator

# Software tools

* MikroC PRO for PIC
* Arduino IDE
* proteus 8

# Installation and Configuration

### 1- ESP8266 Wi-Fi module Configuration

1- Connect the Wi-Fi module to PC by using PL2303 (USB to TTL) converter, the connection schematic as below:

![esp8266 connection with usb-to-ttl converter](https://th.bing.com/th/id/R.a73f0d37f402f616ffcdab750fd9016e?rik=gR9K3a1bZ0a9nA&riu=http%3a%2f%2fcdn.srccodes.com%2fc%2f2017%2f02%2f57%2f6.png&ehk=H9CFoslOUUCbBDo7TgNXaH94Z7HLYvCIEN9QYe3Vut0%3d&risl=&pid=ImgRaw&r=0)

2- The ESP8266 module is programmed using **Arduino IDE**, open **Arduino IDE**, go to **File->Preferences** and paste this URL "http://arduino.esp8266.com/stable/package_esp8266com_index.json" in **Additional boards manager** URLs text box, then press **OK** to download ESP8266 library.

3- To install the library go to **Tools->Board->Boards Manager** and type "ESP8266" then ESP library will appear, install it.

4- Connect the "USB to TTL" converter to PC, then go to select other board and port on the right of the debug button and select the **COM port** of the converter and type **"Generic ESP8266 Module"** in **BOARDS** and select it.

5- Paste the source code of the [esp8266_web_server.ino](https://github.com/Eslam-Rizk/IOT-room-temperature-meter/blob/main/esp8266_web_server/esp8266_web_server.ino) file.

6- Before uploading the code the ESP module must be in flash mode, this is done by holding "reset" button then hold "flash" button, then release "reset" then release "flash".

7- Now you can upload the code by pressing **upload** arrow on the top left, after uploading is done press the "reset" button to start the module.

### 2- PIC16F877A Configuration

Connect PIC16F877A MCU with PICKET2 programmer or any aother microchip programmer and upload [temp_meter](https://github.com/Eslam-Rizk/IOT-room-temperature-meter/blob/main/temp_meter/temp_meter.c) code .

### 3-circit diagram

Connect the project components as shown below:
![IOT temperature meter](https://github.com/Eslam-Rizk/IOT-room-temperature-meter/blob/main/circuit%20diagram.png)
