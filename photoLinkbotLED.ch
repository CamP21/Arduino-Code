#include <arduino.h>
#include <linkbot.h>

CLinkbotI robot;

int sensorPin = A0, // the photoresistor is wired to analog pin A0
    sensorVal, // value from the photoresistor
    pinNumber; // pin numbers for the LEDs
    
double baseline = 100.0, // user-defined minimum value of light
    radius = 1.75, // radius of the wheels in inches
    lightVal, // calculated light value
    speed;

pinMode(sensorPin, INPUT);

//set pin 2-4 as outputs (red - 2, yellow - 3, green - 4)
pinNumber = 2;
while(pinNumber < 5){
    pinMode(pinNumber, OUTPUT);
    digitalWrite(pinNumber, LOW);
    pinNumber++; // loops back and adds 1 to the variable pinNumber
}

    robot.setSpeed(0, radius);
    robot.driveForeverNB();

while(1){
    //read value from the sensor pin and transform it into appropriate light value
    sensorVal = analogRead(sensorPin);
    
    // get the sensor value on a 0-255 scale
    lightVal = (sensorVal/4.0);
    printf("Light value: %.2lf \n", lightVal);
    
    //speed varies between 0 and 6
    speed = (sensorVal/1023.0) * 6.0;
    
    //sets new linkbot speed
    robot.setSpeed(speed, radius);
    robot.driveForeverNB();
    
    // if lightVal is less than baseline (<100), the red LED will be on
    if(lightVal < baseline){
        digitalWrite(2, HIGH);
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        robot.setLEDColor("red");
    }
    
    // if lightVal is more than the baseline (>100) and less than the baseline plus one hundred (<200), the yellow LED will be on
    else if(lightVal >= baseline && lightVal < (baseline + 100)){
        digitalWrite(2, LOW);
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        robot.setLEDColor("yellow");
    }
    
    // if lightVal is more than the baseline (>100) and less than baseline plus one hundred fifty (<250), the green LED will be on
    else if(lightVal >= baseline && lightVal < (baseline + 150)){
        digitalWrite(2, LOW);
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        robot.setLEDColor("green");
    }
    
    delay(100);
}
 

    
