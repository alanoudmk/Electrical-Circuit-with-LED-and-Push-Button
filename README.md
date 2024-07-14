# Electrical Circuit with LED and Push Button :



## 1. LED Control with Push Button Circuit:

Hardware Components:
  - Breadboard
  - LED
  - Push Button
  - Resistor ( 10 K ohm)
  - Arduino Uno 

The circuit works as follows:
  - The resistor is used to keep the push button pin in a known state (HIGH) when the button is not pressed.
      - Without the pull-up resistor, the pin would be in a floating state, which could lead to _unpredictable behavior_.
  -  When the push button is pressed, it connects the pin to ground, pulling the voltage down to 0V (LOW).
      - This triggers the code to turn on the LED. When the button is released, the pull-up resistor pulls the voltage back up to 5V (HIGH), and the LED is turned off.
  - The resistor value is a common choice, as it provides a good balance between limiting the current and ensuring a reliable signal level. This value is high enough to minimize the current draw from the microcontroller, while still being low enough to overcome any potential noise or interference.

    <img src="https://github.com/user-attachments/assets/86ad8738-f0b4-4fbf-b435-6689f224a407" width="400" height="330">

[CODE]()

***



## 2. Push Button Debouncing :


[CODE]()

***


