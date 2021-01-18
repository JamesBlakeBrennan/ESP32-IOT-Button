# ESP32-IOT-Button
Creating an IOT button with the ESP32

The ESP32 is a powerful and cost efficient SoC developed by Espressif systems. It has a bluetooth module and wifi reciever built directly into the processor which makes it ideal for many IoT applications. In this project I will be using the ESP32 to create a simple IOT button. The ESP32 is ideal for this application because it is cost efficient, energy efficient, and is easy to work with after one familiarizes themself with the ESP IDF.

## Getting-Started

To get started on building this project you will need an ESP32 dev board, a button, some jumpers, and the ESP-IDF installed. Installing the ESP-IDF can be tricky, I recommend following the tutorial on learnesp32.com, which is also recommended by Espressif Systems. 

We're just going to get the code running and tested on your board. In the future I would love to build a board around this project and when that time comes I will add Eagle files and a hardware section below. If anyone takes the time to do that before I do and wouldn't mind if I posted your eagle files here please contact me.

This is a picture of the simple circuit I used to test my button. This is all you need to get the software running.



To personalize the code for your own board and MQTT server, change the code shown below, which is located at the top of the main file.



Unless you are familiar with C and the FreeRTOS header files, I wouldnt mess with any of the other code. After building and flashing you should be all set.

## Hardware

This section will be updated when I get around to designing a board and case for the button.


