#include <FastLED.h>

#define LED_PIN     8     
#define NUM_LEDS    25  

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<SK6812, LED_PIN, GRB>(leds, NUM_LEDS);
}

void loop() {
  // Red Loading
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB(255, 0, 0); // Set LED to red
    FastLED.show();
    delay(100); 
  }

  // Green Loading
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB(0, 255, 0); // Set LED to green
    FastLED.show();
    delay(100); 
  }

  // Blue Blinking
  for (int j = 0; j < 5; j++) { // Blink the blue LEDs 5 times
    for (int i = 0; i < NUM_LEDS; i++) {
      leds[i] = CRGB(0, 0, 255); // Set LED to blue
    }
    FastLED.show();
    delay(500); 

    for (int i = 0; i < NUM_LEDS; i++) {
      leds[i] = CRGB(0, 0, 0); // Turn off LEDs
    }
    FastLED.show();
    delay(500); 
  }
}
