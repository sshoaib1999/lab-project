/*
 Lab 1, Exercise 3
 SYED SHOAIB 12/11/19
 */

#include <system.h>
void main() {
        trisb = 0;
        adcon1 = 0x06;
    while(1){
        portb = 0x00;       // No LEDs on
        portb = 0x0f;       // from LED 0 to LED 3 is on
        portb = 0xf0;       // from LED 4 to LED 7 is on
        portb = 0x55;       // Alternating LEDs starting with LED 0 as 1
        portb = 0xaa;       // Alternating LEDs starting with LED 0 as 0
    }
}
