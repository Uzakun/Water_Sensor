//Pin connected to push-button
int buttonPin = 12;
//Variable to check the state
int buttonState;

void setup()
{
    Serial.begin(9600);

  // Defining the button pin as input
  pinMode(buttonPin, INPUT);

}

void loop() 
{
  // Checks if the button state has change
  buttonState = digitalRead(buttonPin);
   if (buttonState == HIGH) {
      Serial.println("Water Detected");
   } else {
      Serial.println("Dry Still");
   }
   delay(1000);
}
