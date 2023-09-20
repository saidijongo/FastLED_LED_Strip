const int numLeds = 25; 
const int dataPin = 8;  

void setup() {
  pinMode(dataPin, OUTPUT);
  digitalWrite(dataPin, LOW); // Initialize the data pin
}

void loop() {
  // Red Loading
  for (int i = 0; i < numLeds; i++) {
    setColor(i, 255, 0, 0); // Set LED to red
    delay(100); 
  }

  // Green Loading
  for (int i = 0; i < numLeds; i++) {
    setColor(i, 0, 255, 0); // Set LED to green
    delay(100); 
  }

  // Blue Blinking
  for (int j = 0; j < 5; j++) { // Blink the blue LEDs 5 times
    for (int i = 0; i < numLeds; i++) {
      setColor(i, 0, 0, 255); // Set LED to blue
    }
    delay(500); 

    for (int i = 0; i < numLeds; i++) {
      setColor(i, 0, 0, 0); // Turn off LEDs
    }
    delay(500); 
  }
}

void setColor(int ledIndex, byte red, byte green, byte blue) {
  for (int i = 0; i < 24; i++) {
    digitalWrite(dataPin, (red & (1 << (7 - i))) ? HIGH : LOW);
    delayMicroseconds(10); // Adjust this delay as needed
  }

  for (int i = 0; i < 24; i++) {
    digitalWrite(dataPin, (green & (1 << (7 - i))) ? HIGH : LOW);
    delayMicroseconds(10); 
  }

  for (int i = 0; i < 24; i++) {
    digitalWrite(dataPin, (blue & (1 << (7 - i))) ? HIGH : LOW);
    delayMicroseconds(10); 
  }
}
