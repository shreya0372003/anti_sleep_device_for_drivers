//Program code for Anti sleep alram Detector for drivers 
 
const int blinkPin = 2;      
const int motorPin =  8;       
const int buzzerPin =  9; 
const int trigPin = 4;  
const int echoPin = 3;  
 
long time; 
 
long duration; 
int distance; 
int safetyDistance; 
 
void setup() { 
  pinMode(motorPin, OUTPUT); 
  pinMode(buzzerPin, OUTPUT); 
  pinMode(blinkPin, INPUT); 
  pinMode(trigPin, OUTPUT);  
  pinMode(echoPin, INPUT); 
  digitalWrite(motorPin, HIGH); 
  Serial.begin(9600); 
} 
 
void loop() {  
  digitalWrite(trigPin, LOW); 
 delayMicroseconds(2); 
 digitalWrite(trigPin, HIGH); 
 delayMicroseconds(15); 
 digitalWrite(trigPin, LOW); 
 
 duration = pulseIn(echoPin, HIGH); 
 
 distance= duration*0.034/2; 
 
 safetyDistance = distance;  
 
 if(!digitalRead(blinkPin)){ 
  time=millis(); 
   while(!digitalRead(blinkPin)){  
   digitalWrite(buzzerPin, HIGH); 
18 
 
   digitalWrite(motorPin, HIGH); 
   delay(500); 
   } 
 } 
 else { 
  if(TimeDelay()>=3)digitalWrite(buzzerPin, LOW); 
  if(TimeDelay()>=4)digitalWrite(motorPin, LOW); 
  delay(3000); 
 } 
 if (safetyDistance <= 30){ 
   digitalWrite(buzzerPin, LOW); 
    delay (100); 
 } 
  else { 
   digitalWrite(buzzerPin, HIGH); 
    delay (100); 
 } 
 Serial.print("Distance: "); 
 Serial.println(distance); 
 
  
} 
int TimeDelay(){ 
 long t=millis()-time; 
 t=t/500; 
 return t; 
} 
