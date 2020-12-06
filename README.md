# Blib

setPin(pin)
blink(n) where n is a 3 or less than 3 digit integer, each digit corresponds to number of times the LED will blink at a certain speed, by default HIGH times are 1000,500,250 ms corresponding to most significant to least significant

For e.g. blink(300), blink(030), blink(003) means led will blink thrice being on for 1000,500,250 ms resp.

use setL(int n), setM(int n), setS(int n) to set the three HIGH time
