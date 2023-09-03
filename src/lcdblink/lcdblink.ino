#include <Sipeed_ST7789.h>

SPIClass spi_(SPI0); // MUST be SPI0 for Maix series on board LCD
Sipeed_ST7789 lcd(320, 240, spi_);


void setup() {
  // set up Serial for outputting to serial monitor
  Serial.begin(115200);

  // initial the LCD for drawing the virtual LED, and make it green
  lcd.begin(15000000, COLOR_GREEN);
}

bool on = false;
void loop() {
  // print out the LED status to the serial monitor
  Serial.print("LED ");
  Serial.println(on ? "on" : "off");

  // draw the virtual LED as on or off
  lcd.fillCircle(160, 120, 100, on ? COLOR_RED : COLOR_BLUE);

  // toggle the variable on
  on = !on;

  // wait for 1 second before looping
  delay(1000);
}
