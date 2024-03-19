int PIRPin = 12;

void setup() {
  Serial.begin(9600);
  pinMode(PIRPin, INPUT);
}

void loop() {
  int value = analogRead(A1);
  Serial.println(value<3);
  if(value < 3){
    int PIRduration = 0;
    while(PIRduration < 3){
      int PIRval = digitalRead(PIRPin);
      Serial.println("PIRVALUE");
      Serial.println(PIRval);
      if(PIRval == HIGH){
        // Take picture
        Serial.println("PICTURE");
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

  

}
