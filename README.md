# Arduino-Code
Coded projects for Arduino Uno

## photoLinkbotLED.ch
- The speed and the color of the Linkbot's LED is determined by the level of light detected by the photoresistor
- Using a photoresistor, the value of the light detected by the sensor is transformed onto a scale from 0-255, and the speed is on a scale of 0-6.
- As the level of light changes, the speed of the Linkbot and color of the Linkbot's LED changes
- If lightVal is less than 100, the LED will be red and the robot will go at a slow speed
- If lightVal is greater than 100 and less than 200, the LED will be yellow and the robot will go at a medium speed
- If lightVal is greater than 200 and less than 250, the LED will be green and the robot will go at a faster speed
