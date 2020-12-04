#include "blib.h"

int pin;
void setPin(int n)
{
    pin = n;
}

void blink(int n)
{
    int one = n % 10;
    int ten = (n % 100 - one) / 10;
    int hun = (n % 1000 - ten) / 100;

    for (int i = 0; i < hun; i++)
    {
        digitalWrite(pin, HIGH);
        delay(1000);
        digitalWrite(pin, LOW);
        delay(1000);
    }
    for (int i = 0; i < ten; i++)
    {
        digitalWrite(pin, HIGH);
        delay(500);
        digitalWrite(pin, LOW);
        delay(500);
    }
    for (int i = 0; i < one; i++)
    {
        digitalWrite(pin, HIGH);
        delay(250);
        digitalWrite(pin, LOW);
        delay(250);
    }
}