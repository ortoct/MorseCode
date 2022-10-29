const int pinLED1 = 12;
const int pinLED2 = 11;
const int spacerLED = 9;
const int dotDelay = 500;         //0.5 second delay
const int dashDelay = 3*dotDelay; //1.5 second delay

void setup() {
  // put your setup code here, to run once:
  pinMode( pinLED1, OUTPUT );
  pinMode( pinLED2, OUTPUT );
  pinMode( spacerLED, OUTPUT );
}

void loop() {
  // put your main code here, to run repeatedly:
  
}

void c(){
  dash();dot();dash();dot();space();
}
void e(){
  dot();space();
}
void i(){
  dot();dot();space();
}
void m(){
  dash();dash();space();
}
void n(){
  dash();dot();space();
}
void o(){
  dash();dash();dash();space();
}
void s(){
  dot();dot();dot();space();
}
void u(){
  dot();dot();dash();space();
}

void dot(){
  digitalWrite( pinLED1, HIGH );
  digitalWrite( pinLED2, HIGH );
  delay(dotDelay);                     //time in milliseconds
  digitalWrite( pinLED1, LOW );
  digitalWrite( pinLED2, LOW );
  delay(dotDelay);
}

void dash(){
  digitalWrite( pinLED1, HIGH );
  digitalWrite( pinLED2, HIGH );
  delay(dashDelay);                     //time in milliseconds
  digitalWrite( pinLED1, LOW );
  digitalWrite( pinLED2, LOW );
  delay(dotDelay);
}

void space(){
  digitalWrite( spacerLED, HIGH );
  delay(dashDelay);                     //time in milliseconds
  digitalWrite( spacerLED, LOW );
  delay(dotDelay);
}
