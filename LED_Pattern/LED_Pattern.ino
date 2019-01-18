int blinkPattern = 1;
int pinOut = 10;
int delayShort = 250;
int delayLong = 1000;

void setup() {
  // put your setup code here, to run once:
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(12, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
patternA();
patternB();
}

void blinkShort(int pinLED) {
  digitalWrite(pinLED, HIGH);
  delay (delayShort);
  digitalWrite(pinLED, LOW); 
  delay (delayShort);
}

void blinkLong(int pinLED) {
  digitalWrite(pinLED, HIGH);
  delay (delayLong);
  digitalWrite(pinLED, LOW); 
  delay (delayShort);

}

void patternA(){
  for (int i = 0; i <= 5; i++){
  blinkShort(pinOut);
  blinkShort(pinOut + 1);
  blinkShort(pinOut + 2);
  delay(delayShort);
  }
}
void patternB(){
  for (int j = 0; j <= 5 ; j++) {
    for (int i = 0; i <= 2; i++) {
      blinkShort(pinOut);
    }
    for (int i = 0; i <= 2; i++) {
      blinkLong(pinOut + 1);
    }
    for (int i = 0; i <= 2; i++) {
      blinkShort(pinOut + 2);
    }
  }
}

void patternC(){
  
}

