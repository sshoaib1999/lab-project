/*
 Lab 1, Exercise 2
 SYED SHOAIB 12/11/19
 */

#include <system.h>
void main() {
    trisb = 0;
    adcon1 = 0x06;
//  portb = 255 - porta;        // invert switch values 
    portb = porta - 255;        // shift the bits to the left 
}


