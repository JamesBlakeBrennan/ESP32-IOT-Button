# ESP32-IOT-Button
Creating an IOT button with the ESP32

The ESP32 is a powerful and cost efficient SoC developed by Espressif systems. It has a bluetooth module and wifi reciever built directly into the processor which makes it ideal for many IoT applications. In this project I will be using the ESP32 to create a simple IOT button. The ESP32 is ideal for this application because it is cost efficient, energy efficient, and is easy to work with after one familiarizes themself with the ESP IDF.

## Getting-Started

To get started on building this project you will need an ESP32 dev board, a button, some jumpers, and the ESP-IDF installed. Installing the ESP-IDF can be tricky, I recommend following the tutorial on learnesp32.com, which is also recommended by Espressif Systems. 

We're just going to get the code running and tested on your board. In the future I would love to build a board around this project and when that time comes I will add Eagle files and a hardware section below. If anyone takes the time to do that before I do and wouldn't mind if I posted your eagle files here please contact me.

This is a picture of the simple circuit I used to test my button. This is all you need to get the software running.

![Image of Circuit](https://lh3.googleusercontent.com/xWjctg24wssxNNOWbkDpiNHhXEfDVcwqrkPLOqNFJMZfoPWnGgQar-nWGx0A66-7FJATXyeo8RjIGBjMouv-l8YjipUFyd1MeLRWV7O_XP_Jb5eS37e5YKTOllJJThjdOd706CB31utxbwGty295vFILBq-VCoBHbSqGTMrLIfJ4ThXwm2GheH4GJS-iLu6ZgF8-fIWTdE7xPTidX9mVhAA_xouioudB7uME1wDmf89MyeVEsK4bi-jajrlhVL3ckbdvXER0D119-YxvpYeQ2uzghT0xFFlcHpXWHOeBrcL2RtUXGL6FsxfJMzR7sWrUjNAdvuJcxJijKoX5CmW6p-u3siMkviLnT-eZBj2jnMEgSkdJsairK9JuSPoE_jpnGm1XNkgw6E6Ooox3sQRzB6zDiswMq9SGRGAxCkdlZjRA_mrx764l97AauIfh4pyFSAZjU_w7XsaDL75peC3-_ytGaqZ6nvjLRrJHcElPJyC8du3vy8b1lYjI1j5oIclummhcjW16JNPEywlaK-PIWVN2FnL7uRBfUuM545Xkd3SS2Evp7NSKCUqSJvlhtHosnt5eu4I-08cYAYw3JoarNuWAHnyiA9CrvIwhMLh1IacLDA7DL2ApPHYH0qF1q98L_gO5tKODJfe3K-gm8IoI3oUCasOYwDBpk3fKt4vgApUcg6F9S0zw4TeQdnzo=w684-h912-no?authuser=1)

To personalize the code for your own board and MQTT server, change the code shown below, which is located at the top of the main file.

![Image of Circuit](https://lh3.googleusercontent.com/9gQ4P-SWMrMownRHrVhCpot1MBPSubLPbn9I-bjz0Ghgkbwp9f56gR2xB7h1rxEjzb5fXEZhDzXRNznvXyMrmI6Pw6NAau79_CR2f_4X3Wu_vSLDLEUSeczTeILO37iov_y0Eb6QOgEL6KZbuX5bymtDMuNuXskGvfTslAeHWwy3U_cRYH8ZFGkDLqtq-FMlIDdudhcKx4h3yJanAc8kLat2mds4uKHvI-4dHm2vb1wqSzkp7uVmZZB9-WZ5dGwUs7rtTu3u78i8EUQDkbXcNz8VCQIQ4HBzp_3RUJTMsshiOagNJ22OErPI4fUgZGTzLkhbdyml1rI3sPy5VCjlrm0UVsaOjg5cqBC8uRhm3AkEAmTipbHn2qDOFtNRVKMEo1flpv4x_e8ojA5tGLYZuDVTBsZK0rIFTOhDMidQqdfuxwpdrvCkWMnOyKLmam7IhK8BxUX3q3AP9ND9H4LLrl6nXMBmjcUakBev1tDm0q7JGWEvSprJquQkGlMmx6ILE3dOQqo8EZSfb3WAKav9YESYhL-QdxSOBkKFjGih43sWNWIJtBDn9vyPvLodTGpu216BjP1iSvchlkooOR5q0T8WR0jURrDSx_fs0pHxYFmWvVtWtSxTfnjFyjn0Pgo0gtV75Nte1RT0sk6iPkvaTk4QV9Vo6th7U3sBIsL-kwYX4K_ib0hSIOkBDndP=w901-h162-no?authuser=1)

Unless you are familiar with C and the FreeRTOS header files, I wouldnt mess with any of the other code. After building and flashing you should be all set.

Once the code is loaded on your board you will need to connect the board to wifi.  This is done using the ESPtouch App which is available on Android and IOS. Its very straightforward but if you need help please refer to the official documentation concerning ESPtouch. 

## Hardware

This section will be updated when I get around to designing a board and case for the button.


