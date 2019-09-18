/* File: trafficLight.ch
    Green light (3000), yellow light (1000), red light (3000)
*/

#include<arduino.h>

int switchState = 0;

pinMode(2, INPUT);  // push-button
pinMode(3, OUTPUT); // green
pinMode(4, OUTPUT); // yellow
pinMode(5, OUTPUT); // red

while(1){
    // always checking if button is pressed
    switchState = digitalRead(2);
    
    if(switchState==0){
        // if false (button not pressed), turns red on with others off
        digitalWrite(5, HIGH); // red
        digitalWrite(4, LOW);
        digitalWrite(3, LOW);
    }else{
        // if true (button pressed), turns red off and others on with delays
        digitalWrite(5, LOW);
        digitalWrite(3, HIGH); // green
        delay(3000);
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH); // yellow
        delay(1000);
        digitalWrite(4, LOW);
        // goes back to only red LED on
    }
}
