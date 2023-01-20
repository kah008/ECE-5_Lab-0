//Challenge 1
//I accidentally deleted all my code instead of saving it as a .ino, so you will be getting my retyped code.

int led = 13;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);
  delay(2000);
  digitalWrite(led,LOW);
  delay(1000);
}
