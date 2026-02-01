//set mode= BUTTON_CONTROL for controling led w button
#define BLINKING 0
#define BUTTON_CONTROL 1

int mode = BLINKING;

int ledpin = 10;
int buttonpin = 3;
int blinkspeed = 1000;
int buttonstate = 0;

void setup() {
  pinMode(ledpin, OUTPUT);     
  pinMode(buttonpin, INPUT);
}

void loop() {

switch (mode){
  case BLINKING:

    digitalWrite(ledpin, HIGH);
    delay(blinkspeed);
    digitalWrite(ledpin, LOW);
    delay(blinkspeed);
    break;

  case BUTTON_CONTROL:

    buttonstate=digitalRead(buttonpin);

    if (buttonstate == HIGH){
      digitalWrite(ledpin, HIGH);
    }
    else if (buttonstate == LOW){
      digitalWrite(ledpin, LOW);
    }
    break;

  default:
  
    digitalWrite(ledpin, LOW);  
    break;
}
}
