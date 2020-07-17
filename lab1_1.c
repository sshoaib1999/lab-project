/*
 Lab 1, Exercise 1
 SYED SHOAIB 12/11/19
 */

#include <system.h>
void main() {
    trisb = 0;              // set all bits in port B as outputs 
    adcon1 = 0x06;          // set port A as digital inputs
    while(1)
    {                       // create an infinite loop 
    portb = porta;          // copy the switches to the lamps 
    }
}
