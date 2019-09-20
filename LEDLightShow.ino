//declarations
const int b1 = 7;
const int y1 = 8;
const int r1 = 9;
const int g = 10;
const int r2 = 11;
const int y2 = 12;
const int b2 = 13;

void setup(){
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop(){
  int i;
  //drumbeat intro
 for(i=1;i<=8;i++){
 digitalWrite(b1, HIGH);
 delay(357);
 digitalWrite(b1, LOW);
 digitalWrite(b2,HIGH);
 delay(357);
 digitalWrite(b2, LOW);
}
//intro chord and arpeggio
 digitalWrite(g, HIGH);
 digitalWrite(r1, HIGH);
 digitalWrite(r2, HIGH);
 delay(2857);
 digitalWrite(g, LOW);
 digitalWrite(r1, LOW);
 digitalWrite(r2, LOW);
 digitalWrite(y1, HIGH);
 digitalWrite(y2, HIGH);
 delay(714);
 digitalWrite(y1, LOW);
 digitalWrite(y2, LOW);
 digitalWrite(r1, HIGH);
 digitalWrite(r2, HIGH);
 delay(1428);

 digitalWrite(r1, LOW);
 digitalWrite(r2, LOW);

 //beat and echo intro
  //measure 1
  digitalWrite(b1, HIGH);
  
 delay(357);
 digitalWrite(b1, LOW);
 digitalWrite(g,HIGH);
 digitalWrite(b2,HIGH);
 delay(357);
 digitalWrite(b2, LOW);
 digitalWrite(b1, HIGH);
 digitalWrite(g, LOW);
 delay(357);
 digitalWrite(b1, LOW);
 digitalWrite(b2,HIGH);
 digitalWrite(r1, HIGH);
 digitalWrite(r2, HIGH);
 delay(357);
 digitalWrite(b2, LOW);
 digitalWrite(r1, LOW);
 digitalWrite(r2, LOW);
 
//measure 2
  digitalWrite(b1, HIGH);
  
 delay(357);
 digitalWrite(b1, LOW);
 digitalWrite(g,HIGH);
 digitalWrite(b2,HIGH);
 delay(357);
 digitalWrite(b2, LOW);
 digitalWrite(b1, HIGH);
 digitalWrite(g, LOW);
 delay(357);
 digitalWrite(b1, LOW);
 digitalWrite(b2,HIGH);
 digitalWrite(r1, HIGH);
 digitalWrite(r2, HIGH);
 delay(357);
 digitalWrite(b2, LOW);
 digitalWrite(r1, LOW);
 digitalWrite(r2, LOW);
 //measure 3
  digitalWrite(b1, HIGH);
  
 delay(357);
 digitalWrite(b1, LOW);
 digitalWrite(g,HIGH);
 digitalWrite(b2,HIGH);
 delay(357);
 digitalWrite(b2, LOW);
 digitalWrite(b1, HIGH);
 digitalWrite(g, LOW);
 delay(357);
 digitalWrite(b1, LOW);
 digitalWrite(b2,HIGH);
 digitalWrite(r1, HIGH);
 digitalWrite(r2, HIGH);
 delay(357);
 digitalWrite(b2, LOW);
 digitalWrite(r1, LOW);
 digitalWrite(r2, LOW);

//measure 4
  digitalWrite(b1, HIGH);
  
 delay(357);
 digitalWrite(b1, LOW);
 digitalWrite(g,HIGH);
 digitalWrite(b2,HIGH);
 delay(357);
 digitalWrite(b2, LOW);
 digitalWrite(b1, HIGH);
 digitalWrite(g, LOW);
 delay(357);
 digitalWrite(b1, LOW);
 digitalWrite(b2,HIGH);
 digitalWrite(r1, HIGH);
 digitalWrite(r2, HIGH);
 delay(357);
 digitalWrite(b2, LOW);
 digitalWrite(r1, LOW);
 digitalWrite(r2, LOW);

 
 //main melody 1
  int full = 178;
 int half = 89;
 delay(full);
 delay(full);
 digitalWrite(b1, HIGH);
 digitalWrite(b2, HIGH);
 delay(half);
 digitalWrite(b2, LOW);
 digitalWrite(b1, LOW);
 delay(half);
 
 digitalWrite(b2, HIGH);
 digitalWrite(b1, HIGH);
 delay(half);
 digitalWrite(b1, LOW);
 digitalWrite(b2, LOW);
 delay(half);
 
 digitalWrite(y2, HIGH);
 digitalWrite(y1, HIGH);
 delay(full);
 digitalWrite(y1, LOW);
 digitalWrite(y2, LOW);
 digitalWrite(g, HIGH);
 delay(full);
 digitalWrite(g, LOW);
 delay(full);
 digitalWrite(g, HIGH);
 delay(full);
 digitalWrite(g, LOW);
 delay(full);
 digitalWrite(r1, HIGH);
 digitalWrite(r2, HIGH);
 delay(full);
 digitalWrite(r1, LOW);
 digitalWrite(r2, LOW);
 delay(full);
 digitalWrite(r1, HIGH);
 digitalWrite(r2, HIGH);
 delay(full);
 digitalWrite(r1, LOW);
 digitalWrite(r2, LOW);
 delay(full);
 digitalWrite(g,HIGH);
 delay(full);
 delay(full);
 digitalWrite(g,LOW);
 digitalWrite(y1,HIGH);
 digitalWrite(y2,HIGH);
 delay(full);
 digitalWrite(y1,LOW);
 digitalWrite(y2,LOW);
 digitalWrite(b1,HIGH);
 digitalWrite(b2,HIGH);
 delay(full);
 digitalWrite(b1,LOW);
 digitalWrite(b2,LOW);
 digitalWrite(r1,HIGH);
 digitalWrite(r2,HIGH);
 delay(full);
 digitalWrite(r1,LOW);
 digitalWrite(r2,LOW);
 digitalWrite(y1,HIGH);
 digitalWrite(y2,HIGH);
 delay(full);
 digitalWrite(b1,HIGH);
 digitalWrite(b2,HIGH);
 digitalWrite(y1,LOW);
 digitalWrite(y2,LOW);
 delay(half);
 digitalWrite(b1,LOW);
 digitalWrite(b2,LOW);
 delay(half);
 digitalWrite(b1,HIGH);
 digitalWrite(b2,HIGH);
 delay(half);
 digitalWrite(b1,LOW);
 digitalWrite(b2,LOW);
 delay(half);
 digitalWrite(b1,HIGH);
 digitalWrite(b2, HIGH);
 delay(half);
 digitalWrite(b1,LOW);
 digitalWrite(b2,LOW);
 delay(half);
 digitalWrite(r1, HIGH);
 digitalWrite(r2, HIGH);
 delay(full);
 delay(full);
 digitalWrite(r1,LOW);
 digitalWrite(r2,LOW);
 digitalWrite(g,HIGH);
 delay(full);
 digitalWrite(g, LOW);
 digitalWrite(b1, HIGH);
 digitalWrite(b2, HIGH);
 delay(full);
 digitalWrite(b1, LOW);
 digitalWrite(b2, LOW);
 delay(full);
 digitalWrite(b1, HIGH);
 digitalWrite(b2, HIGH);
 delay(full);
 digitalWrite(b1, LOW);
 digitalWrite(b2, LOW);
 delay(full);
 digitalWrite(b1, HIGH);
 digitalWrite(b2, HIGH);
 delay(full);
 digitalWrite(b1, LOW);
 digitalWrite(b2, LOW);
 delay(full);
 digitalWrite(g, HIGH);
 delay(half);
 digitalWrite(g, LOW);
 delay(half);
 digitalWrite(g, HIGH);
 delay(half);
 digitalWrite(g, LOW);
 delay(half);
 digitalWrite(r1,HIGH);
 digitalWrite(r2,HIGH);
 delay(full);
 digitalWrite(g, HIGH);
 digitalWrite(r1,LOW);
 digitalWrite(r2,LOW);
 delay(full);
 digitalWrite(g, LOW);

 digitalWrite(b1, HIGH);
 digitalWrite(b2, HIGH);
 delay(half);
 digitalWrite(b2, LOW);
 digitalWrite(b1, LOW);
 delay(half);
 
 digitalWrite(b2, HIGH);
 digitalWrite(b1, HIGH);
 delay(half);
 digitalWrite(b1, LOW);
 digitalWrite(b2, LOW);
 delay(half);
 
 digitalWrite(y2, HIGH);
 digitalWrite(y1, HIGH);
 delay(full);
 digitalWrite(y1, LOW);
 digitalWrite(y2, LOW);
 digitalWrite(g, HIGH);
 delay(full);
 digitalWrite(g, LOW);
 delay(full);
 digitalWrite(g, HIGH);
 delay(full);
 digitalWrite(g, LOW);
 delay(full);
 digitalWrite(r1, HIGH);
 digitalWrite(r2, HIGH);
 delay(full);
 digitalWrite(r1, LOW);
 digitalWrite(r2, LOW);
 delay(full);
 digitalWrite(r1, HIGH);
 digitalWrite(r2, HIGH);
 delay(full);
 digitalWrite(r1, LOW);
 digitalWrite(r2, LOW);
 delay(full);
 digitalWrite(g,HIGH);
 delay(full);
 digitalWrite(g,LOW);
 digitalWrite(y1,HIGH);
 digitalWrite(y2,HIGH);
 delay(full);
 digitalWrite(y1,LOW);
 digitalWrite(y2,LOW);
 digitalWrite(b1,HIGH);
 digitalWrite(b2,HIGH);
 delay(full);
 digitalWrite(b1,LOW);
 digitalWrite(b2,LOW);
 digitalWrite(r1,HIGH);
 digitalWrite(r2,HIGH);
 delay(full);
 digitalWrite(r1,LOW);
 digitalWrite(r2,LOW);
 digitalWrite(y1,HIGH);
 digitalWrite(y2,HIGH);
 delay(full);
 digitalWrite(b1,HIGH);
 digitalWrite(b2,HIGH);
 digitalWrite(y1,LOW);
 digitalWrite(y2,LOW);
 delay(half);
 digitalWrite(b1,LOW);
 digitalWrite(b2,LOW);
 delay(half);
 digitalWrite(b1,HIGH);
 digitalWrite(b2,HIGH);
 delay(half);
 digitalWrite(b1,LOW);
 digitalWrite(b2,LOW);
 delay(half);
 digitalWrite(b1,HIGH);
 digitalWrite(b2, HIGH);
 delay(half);
 digitalWrite(b1,LOW);
 digitalWrite(b2,LOW);
 delay(half);
 digitalWrite(r1, HIGH);
 digitalWrite(r2, HIGH);
 delay(full);
 delay(full);
 digitalWrite(r1,LOW);
 digitalWrite(r2,LOW);
 digitalWrite(g,HIGH);
 delay(full);
 digitalWrite(g, LOW);
 digitalWrite(b1, HIGH);
 digitalWrite(b2, HIGH);
 delay(full);
 digitalWrite(b1, LOW);
 digitalWrite(b2, LOW);
 delay(full);
 digitalWrite(b1, HIGH);
 digitalWrite(b2, HIGH);
 delay(full);
 digitalWrite(b1, LOW);
 digitalWrite(b2, LOW);
 delay(full);
 digitalWrite(b1, HIGH);
 digitalWrite(b2, HIGH);
 delay(full);
 digitalWrite(b1, LOW);
 digitalWrite(b2, LOW);
 delay(full);
 digitalWrite(g, HIGH);
 delay(half);
 digitalWrite(g, LOW);
 delay(half);
 digitalWrite(g, HIGH);
 delay(half);
 digitalWrite(g, LOW);
 delay(half);
 digitalWrite(r1,HIGH);
 digitalWrite(r2,HIGH);
 delay(full);
 digitalWrite(g, HIGH);
 digitalWrite(r1,LOW);
 digitalWrite(r2,LOW);
 delay(full);
 digitalWrite(g, LOW);

// ending measure
 digitalWrite(b1, HIGH);
 digitalWrite(b2, HIGH);
 delay(half);
 digitalWrite(b2, LOW);
 digitalWrite(b1, LOW);
 delay(half);
 
 digitalWrite(b2, HIGH);
 digitalWrite(b1, HIGH);
 delay(half);
 digitalWrite(b1, LOW);
 digitalWrite(b2, LOW);
 delay(half);
 
 digitalWrite(y2, HIGH);
 digitalWrite(y1, HIGH);
 delay(full);
 digitalWrite(y1, LOW);
 digitalWrite(y2, LOW);
 digitalWrite(g, HIGH);
 delay(full);
 digitalWrite(g, LOW);
 delay(full);
 digitalWrite(g, HIGH);
 delay(full);
 digitalWrite(g, LOW);
 delay(full);
 digitalWrite(r1, HIGH);
 digitalWrite(r2, HIGH);
 delay(full);
 digitalWrite(r1, LOW);
 digitalWrite(r2, LOW);
 delay(full);
 digitalWrite(r1, HIGH);
 digitalWrite(r2, HIGH);
 delay(full);
 digitalWrite(r1, LOW);
 digitalWrite(r2, LOW);
 delay(full);
 digitalWrite(g,HIGH);
 delay(full);
 digitalWrite(g,LOW);
 digitalWrite(y1,HIGH);
 digitalWrite(y2,HIGH);
 delay(full);
 digitalWrite(y1,LOW);
 digitalWrite(y2,LOW);
 digitalWrite(b1,HIGH);
 digitalWrite(b2,HIGH);
 delay(full);
 digitalWrite(b1,LOW);
 digitalWrite(b2,LOW);
 digitalWrite(r1,HIGH);
 digitalWrite(r2,HIGH);
 delay(full);
 digitalWrite(r1,LOW);
 digitalWrite(r2,LOW);
 digitalWrite(y1,HIGH);
 digitalWrite(y2,HIGH);
 delay(full);
 digitalWrite(b1,HIGH);
 digitalWrite(b2,HIGH);
 digitalWrite(y1,LOW);
 digitalWrite(y2,LOW);
 delay(half);
 digitalWrite(b1,LOW);
 digitalWrite(b2,LOW);
 delay(half);
 digitalWrite(b1,HIGH);
 digitalWrite(b2,HIGH);
 delay(half);
 digitalWrite(b1,LOW);
 digitalWrite(b2,LOW);
 delay(half);
 digitalWrite(b1,HIGH);
 digitalWrite(b2, HIGH);
 delay(half);
 digitalWrite(b1,LOW);
 digitalWrite(b2,LOW);
 delay(half);
 digitalWrite(r1, HIGH);
 digitalWrite(r2, HIGH);
 delay(full);
 delay(full);
 digitalWrite(r1,LOW);
 digitalWrite(r2,LOW);
 digitalWrite(g,HIGH);
 delay(full);
 digitalWrite(g, LOW);
 digitalWrite(b1, HIGH);
 digitalWrite(b2, HIGH);
 delay(full);
 digitalWrite(b1, LOW);
 digitalWrite(b2, LOW);
 delay(full);
 digitalWrite(b1, HIGH);
 digitalWrite(b2, HIGH);
 delay(full);
 digitalWrite(b1, LOW);
 digitalWrite(b2, LOW);
 delay(full);
 digitalWrite(b1, HIGH);
 digitalWrite(b2, HIGH);
 delay(full);
 digitalWrite(b1, LOW);
 digitalWrite(b2, LOW);
 delay(full);
 digitalWrite(g, HIGH);
 delay(half);
 digitalWrite(g, LOW);
 delay(half);
 digitalWrite(g, HIGH);
 delay(half);
 digitalWrite(g, LOW);
 delay(half);
  digitalWrite(g, HIGH);
 delay(half);
 digitalWrite(g, LOW);
 delay(full);

 //vocals
 digitalWrite(r2, HIGH);
 digitalWrite(y2, HIGH);
 digitalWrite(b2, HIGH);
 delay(full);
 digitalWrite(r2, LOW);
 digitalWrite(y2, LOW);
 digitalWrite(b2, LOW);
 delay(full);
 digitalWrite(r2, HIGH);
 digitalWrite(y2, HIGH);
 digitalWrite(b2, HIGH);
 delay(full);
 digitalWrite(r2, LOW);
 digitalWrite(y2, LOW);
 digitalWrite(b2, LOW);
 delay(full);
 digitalWrite(y2, HIGH);
 digitalWrite(r2,HIGH);
 digitalWrite(g,HIGH);
 delay(full);
 digitalWrite(y2, LOW);
 digitalWrite(r1, HIGH);
 delay(full);
 digitalWrite(r2, LOW);
 digitalWrite(g, LOW);
 digitalWrite(y1, HIGH);
 digitalWrite(b1, HIGH);
 delay(full);
 delay(full);
 delay(full);
 delay(full);
 digitalWrite(y1, LOW);
 digitalWrite(b1, LOW);
 digitalWrite(r1, LOW);
 delay(full);
 delay(full);
 delay(full);
 delay(full);
 delay(full);
 delay(full);
 delay(full);
 delay(full);
 //vocals 2
 digitalWrite(y1, HIGH);
 delay(full);
 digitalWrite(y1, LOW);
 delay(full);
  digitalWrite(y1, HIGH);
 delay(full);
 digitalWrite(y1, LOW);
 delay(full);
 digitalWrite(b1, HIGH);
 delay(full);
 delay(full);
 delay(full);
 for(i=7;i<=13;i++){
  digitalWrite(i, HIGH);
  digitalWrite(i-1, LOW);
  delay(25.5);
 }
delay(full);
delay(full);
 digitalWrite(b2, LOW);
 delay(full);
 digitalWrite(r2, HIGH);
 delay(full);
 delay(full);
 delay(full);
 delay(full);
 digitalWrite(g, HIGH);
 digitalWrite(r2, LOW);
 delay(full);
 digitalWrite(g, LOW);
 delay(full);
 digitalWrite(r1, HIGH);
 delay(full);
 delay(full);
 digitalWrite(r1, LOW);
 digitalWrite(y1, HIGH);
 delay(full);
 delay(full);
 digitalWrite(y1, LOW);
 digitalWrite(b1, HIGH);
 delay(full);
 delay(full);
 
 digitalWrite(b1,LOW);
 delay(full);
 delay(full);
 delay(full);
 delay(full);
 delay(full);
 delay(full);
 delay(full);
 delay(full);
 digitalWrite(g, HIGH);
 delay(full);
 digitalWrite(g, LOW);
 delay(full);
 digitalWrite(g, HIGH);
 delay(full);
 digitalWrite(g, LOW);
 delay(full);
 delay(full);
 digitalWrite(r1, HIGH);
 delay(full);
 delay(full);
 digitalWrite(y1, HIGH);
 digitalWrite(r1, LOW);
 delay(full);
 delay(full);
 delay(full);
 delay(full);
 digitalWrite(y1,LOW);
 digitalWrite(b1,HIGH);
 delay(full);
 delay(full);
 digitalWrite(b1,LOW);
 digitalWrite(y1, HIGH);
 delay(full);
 digitalWrite(y1, LOW);
 delay(full);
 delay(full);
 digitalWrite(r1, HIGH);
 delay(full);
 delay(full);
 digitalWrite(r1, LOW);
 delay(full);
 delay(full);
 digitalWrite(g, HIGH);
 delay(full);
 delay(full);
 digitalWrite(g, LOW);
 delay(full);
 delay(full);
 delay(full);
 delay(full);
 delay(full);
 delay(full);
 delay(full);
 delay(full);
 delay(full);
 delay(full);
 digitalWrite(g, HIGH);
 delay(full);
 digitalWrite(g, LOW);
 delay(full);
 digitalWrite(g, HIGH);
 delay(full);
 digitalWrite(g, LOW);
 delay(full);
  digitalWrite(g, HIGH);
 delay(full);
 digitalWrite(g, LOW);
 delay(full);
 digitalWrite(g, HIGH);
 delay(full);
 digitalWrite(g, LOW);
 digitalWrite(r1,HIGH);
 digitalWrite(r2,HIGH);
 delay(full);
 delay(full);
 delay(full);
 delay(full);
 digitalWrite(r1, LOW);
 digitalWrite(r2, LOW);
 digitalWrite(y1, HIGH);
 digitalWrite(y2, HIGH);
 delay(full);
 delay(full);
 delay(full);
 delay(full);
 digitalWrite(y1, LOW);
 digitalWrite(y2, LOW);
 delay(full);
 delay(full);
 digitalWrite(b1, HIGH);
 digitalWrite(y1, HIGH);
 delay(full);
 digitalWrite(b1, LOW);
 digitalWrite(y1, LOW);
 delay(full);
 digitalWrite(b1, HIGH);
 digitalWrite(y1, HIGH);
 delay(full);
 digitalWrite(b1, LOW);
 digitalWrite(y1, LOW);
 delay(full);
 digitalWrite(b1, HIGH);
 digitalWrite(y1, HIGH);
 delay(full);
 digitalWrite(b1, LOW);
 digitalWrite(y1, LOW);
 delay(full);
 digitalWrite(b1, HIGH);
 digitalWrite(y1, HIGH);
 delay(full);
 digitalWrite(b1, LOW);
 digitalWrite(y1, LOW);
 delay(full);

 digitalWrite(b2, HIGH);
 digitalWrite(y2, HIGH);
 delay(full);
 digitalWrite(b2, LOW);
 digitalWrite(y2, LOW);
 delay(full);
 digitalWrite(b2, HIGH);
 digitalWrite(y2, HIGH);
 delay(full);
 digitalWrite(b2, LOW);
 digitalWrite(y2, LOW);
 delay(full);
 digitalWrite(b2, HIGH);
 digitalWrite(y2, HIGH);
 delay(full);
 digitalWrite(b2, LOW);
 digitalWrite(y2, LOW);
 delay(full);
 digitalWrite(b2, HIGH);
 digitalWrite(y2, HIGH);
 delay(full);
 digitalWrite(b2, LOW);
 digitalWrite(y2, LOW);
 delay(full);

 digitalWrite(r1, HIGH);
 digitalWrite(r2, HIGH);
 digitalWrite(g, HIGH);
 delay(full);
 digitalWrite(r1, LOW);
 digitalWrite(r2, LOW);
 digitalWrite(g, LOW);
 delay(full);
 digitalWrite(r1, HIGH);
 digitalWrite(r2, HIGH);
 digitalWrite(g, HIGH);
 delay(full);
 digitalWrite(r1, LOW);
 digitalWrite(r2, LOW);
 digitalWrite(g, LOW);
 delay(full);
 digitalWrite(r1, HIGH);
 digitalWrite(r2, HIGH);
 digitalWrite(g, HIGH);
 delay(full);
 digitalWrite(r1, LOW);
 digitalWrite(r2, LOW);
 digitalWrite(g, LOW);
 delay(full);
 digitalWrite(r1, HIGH);
 digitalWrite(r2, HIGH);
 digitalWrite(g, HIGH);
 delay(full);
 digitalWrite(r1, LOW);
 digitalWrite(r2, LOW);
 digitalWrite(g, LOW);
 delay(full);

 digitalWrite(b1, HIGH);
 digitalWrite(y1, HIGH);
 delay(full);
 digitalWrite(b1, LOW);
 digitalWrite(y1, LOW);
 delay(full);

 digitalWrite(b2, HIGH);
 digitalWrite(y2, HIGH);
 delay(full);
 digitalWrite(b2, LOW);
 digitalWrite(y2, LOW);
 delay(full);

 digitalWrite(r1, HIGH);
 digitalWrite(r2, HIGH);
 digitalWrite(g, HIGH);
 delay(full);
 digitalWrite(r1, LOW);
 digitalWrite(r2, LOW);
 digitalWrite(g, LOW);
 delay(full);

 digitalWrite(r1, HIGH);
 digitalWrite(r2, HIGH);
 digitalWrite(g, HIGH);
 delay(full);
 digitalWrite(r1, LOW);
 digitalWrite(r2, LOW);
 digitalWrite(g, LOW);
 delay(full);

 digitalWrite(r1, HIGH);
 digitalWrite(r2, HIGH);
 digitalWrite(g, HIGH);
 delay(full);
 digitalWrite(r1, LOW);
 digitalWrite(r2, LOW);
 digitalWrite(g, LOW);
 delay(full);
 digitalWrite(r1, HIGH);
 digitalWrite(r2, HIGH);
 digitalWrite(g, HIGH);
 delay(full);
 digitalWrite(r1, LOW);
 digitalWrite(r2, LOW);
 digitalWrite(g, LOW);
 delay(full);
 digitalWrite(r1, HIGH);
 digitalWrite(r2, HIGH);
 digitalWrite(g, HIGH);
 delay(full);
 digitalWrite(r1, LOW);
 digitalWrite(r2, LOW);
 digitalWrite(g, LOW);
 delay(full);
 digitalWrite(r1, HIGH);
 digitalWrite(r2, HIGH);
 digitalWrite(g, HIGH);
 delay(full);
 digitalWrite(r1, LOW);
 digitalWrite(r2, LOW);
 digitalWrite(g, LOW);
 delay(full);

 digitalWrite(b1, HIGH);
 digitalWrite(y1, HIGH);
 delay(full);
 digitalWrite(b1, LOW);
 digitalWrite(y1, LOW);
 delay(full);
 digitalWrite(b1, HIGH);
 digitalWrite(y1, HIGH);
 delay(full);
 digitalWrite(b1, LOW);
 digitalWrite(y1, LOW);
 delay(full);
 digitalWrite(b1, HIGH);
 digitalWrite(y1, HIGH);
 delay(full);
 digitalWrite(b1, LOW);
 digitalWrite(y1, LOW);
 delay(full);
 digitalWrite(b1, HIGH);
 digitalWrite(y1, HIGH);
 delay(full);
 digitalWrite(b1, LOW);
 digitalWrite(y1, LOW);
 delay(full);

 digitalWrite(b2, HIGH);
 digitalWrite(y2, HIGH);
 delay(full);
 digitalWrite(b2, LOW);
 digitalWrite(y2, LOW);
 delay(full);
 digitalWrite(b2, HIGH);
 digitalWrite(y2, HIGH);
 delay(full);
 digitalWrite(b2, LOW);
 digitalWrite(y2, LOW);
 delay(full);
 digitalWrite(b2, HIGH);
 digitalWrite(y2, HIGH);
 delay(full);
 digitalWrite(b2, LOW);
 digitalWrite(y2, LOW);
 delay(full);
 digitalWrite(b2, HIGH);
 digitalWrite(y2, HIGH);
 delay(full);
 digitalWrite(b2, LOW);
 digitalWrite(y2, LOW);
 delay(full);
 
digitalWrite(b1, HIGH);
 digitalWrite(y1, HIGH);
 delay(full);
 digitalWrite(b1, LOW);
 digitalWrite(y1, LOW);
 delay(full);

 digitalWrite(b2, HIGH);
 digitalWrite(y2, HIGH);
 delay(full);
 digitalWrite(b2, LOW);
 digitalWrite(y2, LOW);
 delay(full);

 digitalWrite(r1, HIGH);
 digitalWrite(r2, HIGH);
 digitalWrite(g, HIGH);
 delay(full);
 digitalWrite(r1, LOW);
 digitalWrite(r2, LOW);
 digitalWrite(g, LOW);
 delay(full);

 digitalWrite(r1, HIGH);
 digitalWrite(r2, HIGH);
 digitalWrite(g, HIGH);
 delay(full);
 digitalWrite(r1, LOW);
 digitalWrite(r2, LOW);
 digitalWrite(g, LOW);
 delay(full);
 
 digitalWrite(b1, HIGH);
 digitalWrite(y1, HIGH);
 delay(full);
 delay(full);
 digitalWrite(b1, LOW);
 digitalWrite(y1, LOW);
 delay(full);
 delay(full);
 digitalWrite(b1, HIGH);
 digitalWrite(y1, HIGH);
 delay(full);
 digitalWrite(b1, LOW);
 digitalWrite(y1, LOW);
 delay(full);
 digitalWrite(b1, HIGH);
 digitalWrite(y1, HIGH);
 delay(full);
 digitalWrite(b1, LOW);
 digitalWrite(y1, LOW);
 delay(full);
 
 digitalWrite(b2, HIGH);
 digitalWrite(y2, HIGH);
 delay(full);
 delay(full);
 digitalWrite(b2, LOW);
 digitalWrite(y2, LOW);
 delay(full);
 delay(full);
  digitalWrite(b2, HIGH);
 digitalWrite(y2, HIGH);
 delay(full);
 digitalWrite(b2, LOW);
 digitalWrite(y2, LOW);
 delay(full);
  digitalWrite(b2, HIGH);
 digitalWrite(y2, HIGH);
 delay(full);
 digitalWrite(b2, LOW);
 digitalWrite(y2, LOW);
 delay(full);

 digitalWrite(r1, HIGH);
 digitalWrite(r2, HIGH);
 digitalWrite(g, HIGH);
 delay(full);
 delay(full);
 digitalWrite(r1, LOW);
 digitalWrite(r2, LOW);
 digitalWrite(g, LOW);
 delay(full);
 delay(full);
 digitalWrite(r1, HIGH);
 digitalWrite(r2, HIGH);
 digitalWrite(g, HIGH);
 delay(full);
 digitalWrite(r1, LOW);
 digitalWrite(r2, LOW);
 digitalWrite(g, LOW);
 delay(full);
 digitalWrite(r1, HIGH);
 digitalWrite(r2, HIGH);
 digitalWrite(g, HIGH);
 delay(full);
 digitalWrite(r1, LOW);
 digitalWrite(r2, LOW);
 digitalWrite(g, LOW);
 delay(full);

 digitalWrite(r1, HIGH);
 digitalWrite(r2, HIGH);
 digitalWrite(g, HIGH);
 delay(full);
 digitalWrite(r1, LOW);
 digitalWrite(r2, LOW);
 digitalWrite(g, LOW);
 delay(full);

 digitalWrite(b1, HIGH);
 digitalWrite(y1, HIGH);
 delay(full);
 digitalWrite(b1, LOW);
 digitalWrite(y1, LOW);
 delay(full);

 digitalWrite(b2, HIGH);
 digitalWrite(y2, HIGH);
 delay(full);
 digitalWrite(b2, LOW);
 digitalWrite(y2, LOW);
 delay(full);

digitalWrite(g, LOW); 
digitalWrite(b1, HIGH);
digitalWrite(b2, HIGH);
delay(half);
digitalWrite(b1, LOW);
digitalWrite(b2, LOW);
digitalWrite(y1, HIGH);
digitalWrite(y2, HIGH);
delay(half);
digitalWrite(y1, LOW);
digitalWrite(y2, LOW);
digitalWrite(r1, HIGH);
digitalWrite(r2, HIGH);
delay(half);
digitalWrite(r1, LOW);
digitalWrite(r2, LOW);
digitalWrite(g, HIGH);
delay(half);

digitalWrite(g, LOW); 
digitalWrite(b1, HIGH);
digitalWrite(b2, HIGH);
delay(half);
digitalWrite(b1, LOW);
digitalWrite(b2, LOW);
digitalWrite(y1, HIGH);
digitalWrite(y2, HIGH);
delay(half);
digitalWrite(y1, LOW);
digitalWrite(y2, LOW);
digitalWrite(r1, HIGH);
digitalWrite(r2, HIGH);
delay(half);
digitalWrite(r1, LOW);
digitalWrite(r2, LOW);
digitalWrite(g, HIGH);
delay(half);

digitalWrite(g, LOW); 
digitalWrite(b1, HIGH);
digitalWrite(b2, HIGH);
delay(half);
digitalWrite(b1, LOW);
digitalWrite(b2, LOW);
digitalWrite(y1, HIGH);
digitalWrite(y2, HIGH);
delay(half);
digitalWrite(y1, LOW);
digitalWrite(y2, LOW);
digitalWrite(r1, HIGH);
digitalWrite(r2, HIGH);
delay(half);
digitalWrite(r1, LOW);
digitalWrite(r2, LOW);
digitalWrite(g, HIGH);
delay(half);

digitalWrite(g, LOW); 
digitalWrite(b1, HIGH);
digitalWrite(b2, HIGH);
delay(half);
digitalWrite(b1, LOW);
digitalWrite(b2, LOW);
digitalWrite(y1, HIGH);
digitalWrite(y2, HIGH);
delay(half);
digitalWrite(y1, LOW);
digitalWrite(y2, LOW);
digitalWrite(r1, HIGH);
digitalWrite(r2, HIGH);
delay(half);
digitalWrite(r1, LOW);
digitalWrite(r2, LOW);
digitalWrite(g, HIGH);
delay(half);

digitalWrite(g, LOW); 
digitalWrite(b1, HIGH);
digitalWrite(b2, HIGH);
delay(half);
digitalWrite(b1, LOW);
digitalWrite(b2, LOW);
digitalWrite(y1, HIGH);
digitalWrite(y2, HIGH);
delay(half);
digitalWrite(y1, LOW);
digitalWrite(y2, LOW);
digitalWrite(r1, HIGH);
digitalWrite(r2, HIGH);
delay(half);
digitalWrite(r1, LOW);
digitalWrite(r2, LOW);
digitalWrite(g, HIGH);
delay(half);

digitalWrite(g, LOW); 
digitalWrite(b1, HIGH);
digitalWrite(b2, HIGH);
delay(half);
digitalWrite(b1, LOW);
digitalWrite(b2, LOW);
digitalWrite(y1, HIGH);
digitalWrite(y2, HIGH);
delay(half);
digitalWrite(y1, LOW);
digitalWrite(y2, LOW);
digitalWrite(r1, HIGH);
digitalWrite(r2, HIGH);
delay(half);
digitalWrite(r1, LOW);
digitalWrite(r2, LOW);
digitalWrite(g, HIGH);
delay(half);

digitalWrite(g, LOW); 
digitalWrite(b1, HIGH);
digitalWrite(b2, HIGH);
delay(half);
digitalWrite(b1, LOW);
digitalWrite(b2, LOW);
digitalWrite(y1, HIGH);
digitalWrite(y2, HIGH);
delay(half);
digitalWrite(y1, LOW);
digitalWrite(y2, LOW);
digitalWrite(r1, HIGH);
digitalWrite(r2, HIGH);
delay(half);
digitalWrite(r1, LOW);
digitalWrite(r2, LOW);
digitalWrite(g, HIGH);
delay(half);

digitalWrite(g, LOW); 
digitalWrite(b1, HIGH);
digitalWrite(b2, HIGH);
delay(half);
digitalWrite(b1, LOW);
digitalWrite(b2, LOW);
digitalWrite(y1, HIGH);
digitalWrite(y2, HIGH);
delay(half);
digitalWrite(y1, LOW);
digitalWrite(y2, LOW);
digitalWrite(r1, HIGH);
digitalWrite(r2, HIGH);
delay(half);
digitalWrite(r1, LOW);
digitalWrite(r2, LOW);
digitalWrite(g, HIGH);
delay(half);

digitalWrite(g, LOW); 
digitalWrite(b1, HIGH);
digitalWrite(b2, HIGH);
delay(half);
digitalWrite(b1, LOW);
digitalWrite(b2, LOW);
digitalWrite(y1, HIGH);
digitalWrite(y2, HIGH);
delay(half);
digitalWrite(y1, LOW);
digitalWrite(y2, LOW);
digitalWrite(r1, HIGH);
digitalWrite(r2, HIGH);
delay(half);
digitalWrite(r1, LOW);
digitalWrite(r2, LOW);
digitalWrite(g, HIGH);
delay(half);

digitalWrite(g, LOW); 
digitalWrite(b1, HIGH);
digitalWrite(b2, HIGH);
delay(half);
digitalWrite(b1, LOW);
digitalWrite(b2, LOW);
digitalWrite(y1, HIGH);
digitalWrite(y2, HIGH);
delay(half);
digitalWrite(y1, LOW);
digitalWrite(y2, LOW);
digitalWrite(r1, HIGH);
digitalWrite(r2, HIGH);
delay(half);
digitalWrite(r1, LOW);
digitalWrite(r2, LOW);
digitalWrite(g, HIGH);
delay(half);

digitalWrite(g, LOW); 
digitalWrite(b1, HIGH);
digitalWrite(b2, HIGH);
delay(half);
digitalWrite(b1, LOW);
digitalWrite(b2, LOW);
digitalWrite(y1, HIGH);
digitalWrite(y2, HIGH);
delay(half);
digitalWrite(y1, LOW);
digitalWrite(y2, LOW);
digitalWrite(r1, HIGH);
digitalWrite(r2, HIGH);
delay(half);
digitalWrite(r1, LOW);
digitalWrite(r2, LOW);
digitalWrite(g, HIGH);
delay(half);

digitalWrite(g, LOW); 
digitalWrite(b1, HIGH);
digitalWrite(b2, HIGH);
delay(half);
digitalWrite(b1, LOW);
digitalWrite(b2, LOW);
digitalWrite(y1, HIGH);
digitalWrite(y2, HIGH);
delay(half);
digitalWrite(y1, LOW);
digitalWrite(y2, LOW);
digitalWrite(r1, HIGH);
digitalWrite(r2, HIGH);
delay(half);
digitalWrite(r1, LOW);
digitalWrite(r2, LOW);
digitalWrite(g, HIGH);
delay(half);

digitalWrite(g, LOW); 
digitalWrite(b1, HIGH);
digitalWrite(b2, HIGH);
delay(half);
digitalWrite(b1, LOW);
digitalWrite(b2, LOW);
digitalWrite(y1, HIGH);
digitalWrite(y2, HIGH);
delay(half);
digitalWrite(y1, LOW);
digitalWrite(y2, LOW);
digitalWrite(r1, HIGH);
digitalWrite(r2, HIGH);
delay(half);
digitalWrite(r1, LOW);
digitalWrite(r2, LOW);
digitalWrite(g, HIGH);
delay(half);

digitalWrite(g, LOW); 
digitalWrite(b1, HIGH);
digitalWrite(b2, HIGH);
delay(half);
digitalWrite(b1, LOW);
digitalWrite(b2, LOW);
digitalWrite(y1, HIGH);
digitalWrite(y2, HIGH);
delay(half);
digitalWrite(y1, LOW);
digitalWrite(y2, LOW);
digitalWrite(r1, HIGH);
digitalWrite(r2, HIGH);
delay(half);
digitalWrite(r1, LOW);
digitalWrite(r2, LOW);
digitalWrite(g, HIGH);
delay(half);

digitalWrite(g, LOW); 
digitalWrite(b1, HIGH);
digitalWrite(b2, HIGH);
delay(half);
digitalWrite(b1, LOW);
digitalWrite(b2, LOW);
digitalWrite(y1, HIGH);
digitalWrite(y2, HIGH);
delay(half);
digitalWrite(y1, LOW);
digitalWrite(y2, LOW);
digitalWrite(r1, HIGH);
digitalWrite(r2, HIGH);
delay(half);
digitalWrite(r1, LOW);
digitalWrite(r2, LOW);
digitalWrite(g, HIGH);
delay(half);

digitalWrite(g, LOW); 
digitalWrite(b1, HIGH);
digitalWrite(b2, HIGH);
delay(half);
digitalWrite(b1, LOW);
digitalWrite(b2, LOW);
digitalWrite(y1, HIGH);
digitalWrite(y2, HIGH);
delay(half);
digitalWrite(y1, LOW);
digitalWrite(y2, LOW);
digitalWrite(r1, HIGH);
digitalWrite(r2, HIGH);
delay(half);
digitalWrite(r1, LOW);
digitalWrite(r2, LOW);
digitalWrite(g, HIGH);
delay(half);

digitalWrite(g, LOW); 
digitalWrite(b1, HIGH);
digitalWrite(b2, HIGH);
delay(half);
digitalWrite(b1, LOW);
digitalWrite(b2, LOW);
digitalWrite(y1, HIGH);
digitalWrite(y2, HIGH);
delay(half);
digitalWrite(y1, LOW);
digitalWrite(y2, LOW);
digitalWrite(r1, HIGH);
digitalWrite(r2, HIGH);
delay(half);
digitalWrite(r1, LOW);
digitalWrite(r2, LOW);
digitalWrite(g, HIGH);
delay(half);

digitalWrite(g, LOW);
 
 delay(60000000);
}


