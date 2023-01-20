int buttonPin = 2;
int ledPin = 13;
int buttonState;
int ledState = LOW

void setup() {
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH && ledState == LOW) {
    digitalWrite(13, HIGH);
    ledState = HIGH;
  }
  else if(buttonState == HIGH && ledState == HIGH) {
    digitalWrite(13, LOW);
    ledState = LOW;
  }
  delay(100);
}
