ARDUINO UNO BLINKING LIGHT PROJECT
===================================
This is a simple beginner project for arduino programming using the arduino uno board.

> Author: *Christopher Amadra Titus*
> 
> Modified: 30/03/2023
> 
> Version: v1.0.0


**Required Hardware**

- Arduino Board
- LED
- 220 Ohm Resister

This LED is connected to the digital pin and its number may vary from board type to board type.
To make your life earsier, there is a constant that is described in evry descriptor files.
This constant below which allows you to control the BUILTIN LED easily.
```
  LED_BUILTIN
```
**FULL PROGRAM CODE**
```
/*
Arduino Uno Blinking Light Project Code.
Authour: Christopher Amadra Titus
Version: v1.0.0
Modified: 30/3/2023
Lab: Kyu_Lab S2.44
*/

void setup() {
  pinMode(LED_BUILTIN, OUTPUT); // Initialize the LED

}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // The led goes on
  delay(1000); // Delays the program for 1000 miliseconds
  digitalWrite(LED_BUILTIN, LOW); // The Led goes off 
  delay(1000); //Delays the program for 1000 miliseconds

}
```
## A DIAGRAM SHOWING THE CIRCUIT
![Tux, the Linux mascot](https://docs.arduino.cc/static/52c238dba09c2e40b69e0612ff02ef0f/29114/circuit.png)
### HOW TO BUILT THE CIRCUIT
- Connect one end of the resistor(220ohms) to the LED_BUILTIN constant.
- Connect the long leg of the LED(positive leg, called the anode) to the other end of the resistor.
- Connect the short leg of the LED(negative leg, called cathode) to the GND.

> - Thanks for reading and trying the beginner Project.
