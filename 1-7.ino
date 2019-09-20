int ledPins[] = {4, 5, 6, 7, 8, 10};
// 4 = red, 5 = blue, 6 = green, 7 = yellow, 8 = red, 9 = blue

const int photoPin = A0;
const int buttonPin = 3;
const int switchPin = 2;

int lightCal; //the base light value that the photoresistor will use to determine when it is dark and when it is light
int lightVal; //the current light value that will be compared to the base light value
int buttonState; //will tell if the button is pressed on not
int switchVal; //will tell if the switch is slid or not

void setup(){
  int index; //another variable to track for loop
  for(index = 0; index <=5; index++){
    pinMode(ledPins[index], OUTPUT);
  }
  pinMode(photoPin, INPUT);
  pinMode(buttonPin, INPUT);
  pinMode(switchPin, INPUT);

  lightCal = analogRead(photoPin); //taking a single reading from the light sensor and storing it as the LightCal value
}

void loop(){
  lightVal = analogRead(photoPin); //reading the photoPin value to determine the current light value (compared to LightCal to determine whether it is darker or brighter)
  switchVal = digitalRead(switchPin); //reading the switchPin value (whether it is switched on or off) to determine what should happen to the ledPins
  //reading the buttonPin value (whether it is pressed down or not) to determine what should happen to the led pins

//if the switchVal is turned on, the green light should turn on
  if(switchVal == HIGH){
    digitalWrite(6, HIGH);
    buttonState = digitalRead(buttonPin);
    //if the button is pressed down/turned on, run void button
    if(buttonState == LOW){
      button();
      }
  }
  else{
      digitalWrite(6, LOW); //if the switchVal is off, AND lightVal is lower than lightCal, then run void photoresistor
      if(lightVal < lightCal - 50){
        photoresistor();
      }
  }

}

void photoresistor(){
    int index;
    for(index = 0; index <= 5; index++){
      digitalWrite(ledPins[index], HIGH);
      digitalWrite(ledPins[index] + 1, HIGH);
      index = index + 1;
      delay(500);
    }
    for(index = 0; index <= 5; index++){
      digitalWrite(ledPins[index], LOW);
      delay(500);
    }
 }


//in this void, yellow will turn on, then red, then green
 void button(){
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    delay(1000);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    delay(3000);
    digitalWrite(8, LOW);
    digitalWrite(6, HIGH);
 }
