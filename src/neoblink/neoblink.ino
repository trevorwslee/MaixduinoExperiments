#include <Adafruit_NeoPixel.h>


#define PIN        7
#define NUMPIXELS  4

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  // set up Serial for outputting to serial monitor
  Serial.begin(115200);

  // initial the neo-pixel strip
  pixels.begin();

  // set the brightness
  pixels.setBrightness(1);
}

int idx = 0;
void loop() {
  // print out to the serial monitor which pixel to blink
  Serial.print("blinking pixel @ ");
  Serial.println(idx);

  // set the pixel @ idx to green
  pixels.setPixelColor(idx, pixels.Color(0, 255, 0));
  pixels.show();

  // delay for a second
  delay(1000);

  // turn off the pixel @ idx 
  pixels.setPixelColor(idx, 0);
  pixels.show();
 
  // delay for a second
  delay(1000);

  // change idx to next pixel
  idx = (idx + 1) % NUMPIXELS;
}