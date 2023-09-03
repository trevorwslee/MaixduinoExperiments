
#include "dumbdisplay.h"


// create the DumbDisplay object; assuming USB connection with 115200 baud
DumbDisplay dumbdisplay(new DDInputOutput(115200));

// declare a LED layer object, to be created in setup()
LedGridDDLayer *led;


void setup() {
    // create the LED layer object, with only a single LED
    led = dumbdisplay.createLedGridLayer();
}


void loop() {
    // toggle the LED
    led->toggle();

    // delay for a second
    delay(1000);
}
