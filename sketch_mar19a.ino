int PIRPin1 = 12;
//set rest of PIR 
int PIRPin2 = 2;
int PIRPin3 = 4;
int PIRPin4 = 6;

#include <Stepper.h>

Stepper myStepper(200, 8,9,10,11);

void setup() {
  Serial.begin(9600);
  pinMode(PIRPin, INPUT);
  myStepper.setSpeed(60);
}

void loop() {
  int garage1 = analogRead(A0);
  int garage2 = analogRead(A1);
  int garage3 = analogRead(A2);
  int garage4 = analogRead(A3);
  
  Serial.println(garage1);
  Serial.println(garage1<3);
  if(garage1 < 3){
    int PIRduration = 0;
    while(PIRduration < 3){
      int PIRval = digitalRead(PIRPin1);
      myStepper.step(200); //200 = 1 full rotation // motor
      
      Serial.println("PIRVALUE");
      Serial.println(PIRval);
      if(PIRval == HIGH){
        // Take picture
        Serial.println("PICTURE on %i", garage1);
        break;
      }
      else{
        PIRduration++;
        delay(3000);
      }
    }

  Serial.println(garage2);
  Serial.println(garage2<3);
  if(garage2 < 3){
    int PIRduration = 0;
    while(PIRduration < 3){
      int PIRval = digitalRead(PIRPin2);
      myStepper.step(200); //200 = 1 full rotation // motor
      
      Serial.println("PIRVALUE");
      Serial.println(PIRval);
      if(PIRval == HIGH){
        // Take picture
        Serial.println("PICTURE on %i", garage2);
        break;
      }
      else{
        PIRduration++;
        delay(3000);
      }
    }

  Serial.println(garage3);
  Serial.println(garage3<3);
  if(garage3 < 3){
    int PIRduration = 0;
    while(PIRduration < 3){
      int PIRval = digitalRead(PIRPiN3);
      myStepper.step(200); //200 = 1 full rotation // motor
      
      Serial.println("PIRVALUE");
      Serial.println(PIRval);
      if(PIRval == HIGH){
        // Take picture
        Serial.println("PICTURE on %i", garage3);
        break;
      }
      else{
        PIRduration++;
        delay(3000);
      }
    }
    
  }
  Serial.println(value<3);
  delay(100);

  Serial.println(garage4);
  Serial.println(garage4<3);
  if(garage4 < 3){
    int PIRduration = 0;
    while(PIRduration < 3){
      int PIRval = digitalRead(PIRPin);
      myStepper.step(200); //200 = 1 full rotation // motor
      
      Serial.println("PIRVALUE");
      Serial.println(PIRval);
      if(PIRval == HIGH){
        // Take picture
        Serial.println("PICTURE on %i", garage4);
        break;
      }
      else{
        PIRduration++;
        delay(3000);
      }
    }

  

}
