 /* File: linkbotSpeedBot.ch
 Use a potentiometer to control the speed of a Linkbot */
 
 #include <arduino.h>
 #include <linkbot.h>
 
 CLinkbotI robot;
 double radius = 1.75; // radius of wheel in inches
 int potVal;
 double angularSpeed = 0;
 int potPin = A0;
 int ledPin = 3;
 
 pinMode(ledPin, OUTPUT); // declares LED output pin
 
 robot.setJointSpeeds(angularSpeed, NaN, angularSpeed);
 robot.moveForeverNB();
 
 while(1){
    potVal = analogRead(potPin);
    // angular speed varies between -60 and -60
    angularSpeed = (potVal / 1023.0) * 120.0 - 60;
    
    // resets Linkbot turn speeds
    robot.setJointSpeeds(angularSpeed, NaN, angularSpeed);
    robot.moveForeverNB();
 
    // controls LED
    if(angularSpeed < 0){
        digitalWrite(ledPin, LOW);
    }
    else{
        digitalWrite(ledPin, HIGH);
    }
    delay(100);
}

