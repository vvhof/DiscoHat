void setup() {
  //BLUE
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  //RED
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT); 
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}
// the loop function runs over and over again forever
void loop() {
  //fade(5);
  colorsInParallel();
  colorsInParallel();
  colorsInParallel();
  colorsInParallel();
  
  colorsInSequence();
  colorsInSequence();
  colorsInSequence();
  colorsInSequence();
  
  allInSequence();
  allInSequence();
  allInSequence();
  allInSequence();
  allInSequence();
}
// DIFFERENT PROGRAMS
// all blue are on, then all red and so on
void colorsInParallel(){
  blueon();
  redon();
  delay(1000);              // wait for a second
  blueoff();
  redoff();
  delay(750);              // wait for almost a second
}
// all blue are on, then all red and so on
void colorsInSequence(){
  blueon();
  delay(750);              // wait for almost a second
  blueoff();
  redon();
  delay(750);              // wait for almost a second
  redoff();
}
// LEDs are turnd of in sequence
void allInSequence() {
  digitalWrite(3, HIGH);
  delay(100);
  digitalWrite(3, LOW);  
  digitalWrite(8, HIGH);
  delay(100);
  digitalWrite(8, LOW);  
  digitalWrite(4, HIGH);
  delay(100);
  digitalWrite(4, LOW);  
  digitalWrite(9, HIGH);
  delay(100);
  digitalWrite(9, LOW);  
  digitalWrite(5, HIGH);
  delay(100);
  digitalWrite(5, LOW);  
  digitalWrite(10, HIGH);
  delay(100);
  digitalWrite(10, LOW);  
  digitalWrite(6, HIGH);
  delay(100);
  digitalWrite(6, LOW);  
  digitalWrite(11, HIGH);
  delay(100);
  digitalWrite(11, LOW);  
  digitalWrite(7, HIGH);
  delay(100);
  digitalWrite(7, LOW);  
  digitalWrite(12, HIGH);
  delay(100);
  digitalWrite(12, LOW);  
}

void fade(int completeFades) {  
  int brightness = 0;
  int fadeAmount = 5;

  while (completeFades > 0) {
    // Set the led brightness
    blueSet(brightness);
    redSet(brightness);
    
    // change the brightness for next time through the loop:
    brightness = brightness + fadeAmount;
  
    // reverse the direction of the fading at the ends of the fade:
    if (brightness == 0 || brightness == 300) {
      fadeAmount = -fadeAmount ;
    }
    delay(300);
    
    if (brightness == 0) {
      completeFades--;
    }
  }
}
  
// HELPER FUNCTIONS
// turns all red LED on
void redon() {
  digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(9, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(10, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(11, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(12, HIGH);   // turn the LED on (HIGH is the voltage level)
}
// turns all red LED off
void redoff() {
  digitalWrite(8, LOW);   // turn the LED off (LOW is the voltage level)
  digitalWrite(9, LOW);   // turn the LED off (LOW is the voltage level)
  digitalWrite(10, LOW);   // turn the LED off (LOW is the voltage level)
  digitalWrite(11, LOW);   // turn the LED off (LOW is the voltage level)
  digitalWrite(12, LOW);   // turn the LED off (LOW is the voltage level)
}
// turns all blue LED on
void blueon() {
  digitalWrite(3, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(5, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
}
// turns all blue LED off
void blueoff() {
  digitalWrite(3, LOW);   // turn the LED off (LOW is the voltage level)
  digitalWrite(4, LOW);   // turn the LED off (LOW is the voltage level)
  digitalWrite(5, LOW);   // turn the LED off (LOW is the voltage level)
  digitalWrite(6, LOW);   // turn the LED off (LOW is the voltage level)
  digitalWrite(7, LOW);   // turn the LED off (LOW is the voltage level)
}

void redSet(int brightness) {
  analogWrite(8, brightness);
  analogWrite(9, brightness);
  analogWrite(10, brightness);
  analogWrite(11, brightness);
  analogWrite(12, brightness);
}

void blueSet(int brightness) {
  analogWrite(3, brightness);
  analogWrite(4, brightness);
  analogWrite(5, brightness);
  analogWrite(6, brightness);
  analogWrite(7, brightness);
}
