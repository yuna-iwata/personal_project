//install FastLED by daniel garcia from lib manager
#include <avr/pgmspace.h> //to store stuff in Flash using PROGMEM
#include <FastLED.h>
#define LED_PIN 4
#define NUM_LEDS 100

CRGB leds[NUM_LEDS];


//create array of pixel art and store it in flash memory
const long cat[] PROGMEM = {
  0x6bb572, 0x6bb572, 0x6bb572, 0x6bb572, 0x6bb572, 0x6bb572,
  0x6bb572, 0x6bb572, 0x6bb572, 0x6bb572, 0x6bb572, 0x6bb572,
  0xff007f, 0x6bb572, 0x6bb572, 0xff007f, 0x6bb572, 0xff007f,
  0x6bb572, 0x6bb572, 0x6bb572, 0x6bb572, 0xff007f, 0xff007f,
  0xff007f, 0xff007f, 0xff007f, 0xff007f, 0x6bb572, 0x6bb572,
  0x6bb572, 0x6bb572, 0xff007f, 0xff007f, 0xff007f, 0xff007f,
  0xff007f, 0xff007f, 0x6bb572, 0x6bb572, 0x6bb572, 0xff007f,
  0xff007f, 0xff007f, 0xff007f, 0xff007f, 0x6bb572, 0x6bb572,
  0xff007f, 0x6bb572, 0x6bb572, 0xff007f, 0x6bb572, 0x6bb572,
  0xff007f, 0x000000, 0xff007f, 0x000000, 0xff007f, 0x6bb572,
  0x6bb572, 0xff007f, 0xff007f, 0xff007f, 0xff007f, 0xff007f,
  0x6bb572, 0xff007f, 0x6bb572, 0x6bb572, 0x70b377, 0x70b377,
  0xff007f, 0x70b377, 0xff007f, 0x6bb572, 0x6bb572, 0x6bb572,
  0xff007f, 0x6bb572, 0x6bb572, 0x6bb572, 0x6bb572, 0x6bb572,
  0x6bb572, 0x6bb572, 0x6bb572, 0x6bb572, 0xff007f, 0x6bb572,
  0x6bb572, 0x6bb572, 0x6bb572, 0x6bb572, 0x6bb572, 0x6bb572,
  0x6bb572, 0x6bb572, 0x6bb572, 0x6bb572
};


void setup() {
  // put your setup code here, to run once:
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setMaxPowerInVoltsAndMilliamps(5,500);
  FastLED.clear();
  FastLED.show();
  FastLED.setBrightness(5);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0; i<NUM_LEDS; i++){

    leds[i] = pgm_read_dword(&(cat[i]));
  };
  FastLED.show();
}
