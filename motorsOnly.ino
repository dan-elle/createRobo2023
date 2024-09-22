// left motor
int leftMotorSpeedPin = 3;
int leftMotorForwardPin = 4;
int leftMotorBackwardPin = 5;

// right motor
int rightMotorSpeedPin = 11;
int rightMotorForwardPin = 12;
int rightMotorBackwardPin = 13;


void setup() {
    pinMode(leftMotorSpeedPin, OUTPUT);
    pinMode(leftMotorForwardPin, OUTPUT);
    pinMode(leftMotorBackwardPin, OUTPUT);
    pinMode(rightMotorSpeedPin, OUTPUT);
    pinMode(rightMotorForwardPin, OUTPUT);
    pinMode(rightMotorBackwardPin, OUTPUT);

    Serial.begin(9600);

  digitalWrite(leftMotorSpeedPin, HIGH);
  digitalWrite(rightMotorSpeedPin, HIGH);
   
}

void loop() {

  goForward();
  delay(4000);
  stop();
  delay(100);
  goBackward();
  delay(4000);
  stop();

}

void goForward() {
  digitalWrite(leftMotorForwardPin, HIGH);
  digitalWrite(leftMotorBackwardPin, LOW);
  digitalWrite(rightMotorForwardPin, HIGH);
  digitalWrite(rightMotorBackwardPin, LOW);
}

void goBackward() {
  digitalWrite(leftMotorForwardPin, LOW);
  digitalWrite(leftMotorBackwardPin, HIGH);
  digitalWrite(rightMotorForwardPin, LOW);
  digitalWrite(rightMotorBackwardPin, HIGH);
}

void stop() {
  digitalWrite(leftMotorForwardPin, LOW);
  digitalWrite(leftMotorBackwardPin, LOW);
  digitalWrite(rightMotorForwardPin, LOW);
  digitalWrite(rightMotorBackwardPin, LOW);
}

void goRight() {
  digitalWrite(leftMotorForwardPin, HIGH);
  digitalWrite(leftMotorBackwardPin, LOW);
  digitalWrite(rightMotorForwardPin, LOW);
  digitalWrite(rightMotorBackwardPin, LOW);
}

void goLeft() {
  digitalWrite(leftMotorForwardPin, LOW);
  digitalWrite(leftMotorBackwardPin, LOW);
  digitalWrite(rightMotorForwardPin, HIGH);
  digitalWrite(rightMotorBackwardPin, LOW);
}
