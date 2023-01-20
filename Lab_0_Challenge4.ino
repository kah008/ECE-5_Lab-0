const int sensorPin = A0;
int lightLevel;
int led = 13;

void setup() {
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);
  lightLevel = analogRead(sensorPin);
  Serial.print("The photoresistor is reading: ");
  Serial.print(lightLevel);
  delay(2000);
  digitalWrite(led, LOW);
  lightLevel = analogRead(sensorPin);
  Serial.print("The photoresistor is reading: ");
  Serial.print(lightLevel);
  delay(2000);
}
