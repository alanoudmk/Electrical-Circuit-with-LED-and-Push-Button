# Electrical Circuit with LED and Push Button :



## 1. LED Control with Push-Button:

Hardware Components:
  - Breadboard
  - Arduino Uno 
  - Push-Button
  - LED
  - Resistor ( 10K ohm)

The circuit works as follows:
  - The resistor is used to keep the push button pin in a known state (HIGH) when the button is not pressed.
      - Without the pull-up resistor, the pin would be in a floating state, which could lead to _unpredictable behavior_.
  -  When the push button is pressed, it connects the pin to ground, pulling the voltage down to 0V (LOW).
      - This triggers the code to turn on the LED. When the button is released, the pull-up resistor pulls the voltage back up to 5V (HIGH), and the LED is turned off.
  - The resistor value is a common choice, as it provides a good balance between limiting the current and ensuring a reliable signal level. This value is high enough to minimize the current draw from the microcontroller, while still being low enough to overcome any potential noise or interference.

    <img src="https://github.com/user-attachments/assets/86ad8738-f0b4-4fbf-b435-6689f224a407" width="400" height="330">

[CODE]()

***



## 2. Turn LED On and Off with Push-Button:

Hardware Components:
  - Breadboard
  - Arduino Uno
  - Push-Button
  - LED
  - Resistor ( 220 ohm)
  - Resistor ( 10K ohm)

The circuit works as follows:
  - The 220 ohm resistor is used to limit the current flowing through the LED and prevent it from burning out.
      - The value of the resistor can be calculated using Ohm's law, as in the previous example.
  - The 10K ohm pull-up resistor is used to keep the push button pin in a known state (HIGH) when the button is not pressed.
      - Without the pull-up resistor, the pin would be in a floating state, which could lead to unpredictable behavior.
  - When the push button is pressed, it connects the pin to ground, pulling the voltage down to 0V (LOW). This triggers the code to turn on the LED.
  - When the button is released, the pull-up resistor pulls the voltage back up to 5V (HIGH), and the LED is turned off.


    <img src="https://github.com/user-attachments/assets/0bec6a72-3ce7-4ab1-9880-b99dc83d0cf2" width="400" height="330">



[CODE]()

***


