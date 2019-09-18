# Arduino-Code
Coded projects for Arduino Uno in the second year of my high school's coding and robotics pathway

## 1-7.ino
- Lights up LEDs based on the reading of a SPDT switch, photoresistor, and button
 - When the switch is turned on, the green LED will turn on
  - If the button is pressed and the switch is on, the green LED will turn off, the yellow LED will turn on for one second before turning off, the red LED will turn on for three seconds before turning off, and then the green LED will turn on again until the switch is turned off or the button is pressed.
 - When the photoresistor registers the area as dark and the switch is off, the first red and blue LEDs will turn on together, then the green and yellow LEDs on together, and finally the red and blue LEDs will turn on together. After this, they will turn off one by one, starting with the first red and ending with the last blue. This part of the code will repeat if the photoresistor still senses the area as dark. 
  
