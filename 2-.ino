int ledpin = 10;
int buttonpin = 3;
int blinkspeed = 1000;
int buttonstate = 0;

void setup() {
  pinMode(ledpin, OUTPUT);
  pinMode(buttonpin, INPUT);
}

void loop() {

  buttonstate = digitalRead(buttonpin);
  if (buttonstate == HIGH) {
    digitalWrite(ledpin, HIGH);
    delay(blinkspeed);
    digitalWrite(ledpin, LOW);
    delay(blinkspeed);
    
  } else if (buttonstate == LOW) {
    digitalWrite(ledpin, LOW);
  }
}

