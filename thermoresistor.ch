#include <arduino.h>

//declare pin, sensor, and baseline variables
int sensorPin = A0,
    sensorVal,
    pinNumber;

double baselineTemp = 25.0,
    voltage,
    temperature;
    
//set pin 2-4 as outputs and set them to 0 volts
pinNumber = 2;
while(pinNumber < 5){
    pinMode(pinNumber, OUTPUT);
    digitalWrite(pinNumber, LOW);
    pinNumber++;
}

while(1){
    //read the value from the sensor pin then transform it into the appropriate voltage
    //between 0 and 5 volts and transform this to the corresponding temperature for this sensor
    sensorVal = analogRead(sensorPin);
    printf("Voltage: %.d", sensorVal);
    
    voltage = (sensorVal/1023.0) * 5.0;
    printf(", voltage: %.2lf", voltage);
    
    temperature = (voltage - 0.5) * 100;
    printf(", degrees C: %.2lf \n", temperature);
    
    //if the new temperature is less than the user defined minimum temp then all LEDs are off
    if(temperature < baselineTemp){
        digitalWrite(2, LOW);
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
    }
    //if the new temp us within 2 degrees above the minimum temp then, only the first LED is on
else if (temperature >= baselineTemp && temperature < (baselineTemp+2)){
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
}

//if new temp is within 2 to 4 degrees above the minimum temp, then the first 2 LEDs are on
    else if (temperature >= (baselineTemp+2) && temperature < (baselineTemp+4)){
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
    }
//if new temp is greater than 4 degrees above minimum temp then, all LEDs are on
    else{
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
    }
    delay(1000);
}
