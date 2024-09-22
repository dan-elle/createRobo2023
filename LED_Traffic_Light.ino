int red = 13;
int yellow = 12;
int green = 11;

void setup() {
  // put your setup code here, to run once:
    pinMode(red, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(green, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    changeLights();
    delay(4000);
}

void changeLights(){
    // green on
    digitalWrite(red, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(green, HIGH);
    delay(500);
    digitalWrite(green, LOW);
    delay(500);
    digitalWrite(green, HIGH);
    delay(3000);

  // yellow on
    digitalWrite(red, LOW);
    digitalWrite(yellow, HIGH);
    digitalWrite(green, LOW);
    delay(3000);

    // red on
    digitalWrite(red, HIGH);
    digitalWrite(yellow, LOW);
    digitalWrite(green, LOW);
    delay(3000);
}
