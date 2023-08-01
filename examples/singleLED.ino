//install FastLED by daniel garcia from lib manager
//this will light the first LED with the colour (255,0,0)
#include <FastLED.h>
#define LED_PIN 4
#define NUM_LEDS 100

CRGB leds[NUM_LEDS];


void setup() {
  // put your setup code here, to run once:
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setMaxPowerInVoltsAndMilliamps(5,500);
  FastLED.clear();
  FastLED.show();

}

void loop() {
  // put your main code here, to run repeatedly:
  leds[0] = CRGB(225,0,0);
  FastLED.show();
}