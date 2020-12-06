#include "blib.h"

int pin;
int l = 1000;
int m = 500;
int s = 250;
void setPin(int n)
{
    pin = n;
}

void setPins(int arr[])
{
    int pins[] = arr[];
}

void blink(int n)
{
    int one = n % 10;
    int ten = (n % 100 - one) / 10;
    int hun = (n % 1000 - ten) / 100;

    for (int i = 0; i < hun; i++)
    {
        digitalWrite(pin, HIGH);
        delay(l);
        digitalWrite(pin, LOW);
        delay(l);
    }
    for (int i = 0; i < ten; i++)
    {
        digitalWrite(pin, HIGH);
        delay(m);
        digitalWrite(pin, LOW);
        delay(m);
    }
    for (int i = 0; i < one; i++)
    {
        digitalWrite(pin, HIGH);
        delay(s);
        digitalWrite(pin, LOW);
        delay(s);
    }
}

void blinks(int n)
{
    int len = sizeof(pins) / sizeof(pins[0]);
    for (int i = 0; i < len; i++)
    {
        pin = pins[i];
        blink(n);
    }
}
void setL(int n) { l = n; }
void setM(int n) { m = n; }
void setS(int n) { s = n; }
