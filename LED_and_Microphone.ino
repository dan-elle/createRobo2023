const int ledpin1 = 2; // ledpin and soundpin are not changed throughout the process
const int ledpin2 = 4;
const int ledpin3 = 7;
const int ledpin5 = 12;
const int ledpin4 = 13;
const int soundpin = A0;
const int threshold = 10;// sets threshold value for sound sensor

void setup() {
  Serial.begin(9600);
  pinMode(ledpin1, OUTPUT);
  pinMode(ledpin2, OUTPUT);
  pinMode(ledpin3, OUTPUT);
  pinMode(ledpin4, OUTPUT);
  pinMode(ledpin5, OUTPUT);
  pinMode(soundpin, INPUT);
}
void loop() {
  int soundsens = analogRead(soundpin); // reads analog data from sound sensor
  if (soundsens >= threshold+40) {
    digitalWrite(ledpin1, HIGH); //turns led on
    delay(100);
  }
  else {
    digitalWrite(ledpin1, LOW);
  }
  if (soundsens >= (threshold+45)) {
    digitalWrite(ledpin2, HIGH); //turns led on
    delay(100);
  }
  else {
    digitalWrite(ledpin2, LOW);

  }
  if (soundsens >= (threshold+50)) {
    digitalWrite(ledpin3, HIGH); //turns led on
    delay(100);
  }
  else {
    digitalWrite(ledpin3, LOW);

  }
  if (soundsens >= (threshold+53)) {
    digitalWrite(ledpin4, HIGH); //turns led on
    delay(100);
  }
  else {
    digitalWrite(ledpin4, LOW);

  }
  if (soundsens >= (threshold+55)) {
    digitalWrite(ledpin5, HIGH); //turns led on
    delay(100);
  }
  else {
    digitalWrite(ledpin5, LOW);
  }
}
