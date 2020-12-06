#include <blib.h>
#define LED 13
void setup()
{
    pinMode(LED, OUTPUT);
    setPin(LED);
}

void loop()
{
    blink(006);
    delay(1000);
}