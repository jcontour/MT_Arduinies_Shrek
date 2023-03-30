const int buttonPin = 8;
int buttonVal;
const int ledPin = 13;

void setup(){
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  buttonVal = digitalRead(buttonPin);

  if (buttonVal == LOW) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  } 
}
