#include <FastLED.h>
#define LED_PIN     2
#define NUM_LEDS    18
CRGB leds[NUM_LEDS];
void setup() {
  FastLED.addLeds<SK6812 , LED_PIN, GRB>(leds, NUM_LEDS);
}
void loop() {
  for (int i = 0; i <= NUM_LEDS; i++) {         //RGB white round
    leds[i] = CRGB ( 255, 255, 255);
    FastLED.show();
    delay(5);
  }
  for (int i = 0; i <= NUM_LEDS; i++) {         //Red round
    leds[i] = CRGB ( 255, 0, 0);
    FastLED.show();
    delay(5);
  }
  for (int i = 0; i <= NUM_LEDS; i++) {         //Green round 
    leds[i] = CRGB ( 0, 255, 0);
    FastLED.show();
    delay(5);
  }
  for (int i = 0; i <= NUM_LEDS; i++) {         //Blue round 
    leds[i] = CRGB ( 0, 0, 255);
    FastLED.show();
    delay(5);
  }
}
