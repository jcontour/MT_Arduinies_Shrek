const int buttonPin = 8;
int buttonVal;

void setup(){
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonVal = digitalRead(buttonPin);

  if (buttonVal == LOW) {
    // do this
  } else {
    // do that
  } 
}
