/*
 Lab 1, Exercise 7
 SYED SHOAIB 12/11/19
 */

#include <system.h>
void main() {
    trisb = 0;
    adcon1 = 0x06;
    while(1){
        if((porta & 0x10)!= 0){
            portb = porta;           // copy the switches to LEDs
        }
        else if((porta & 1)!= 0){
            portb = 0xff;            // put all LEDs on
        }
        else{
            portb = 0;               // put all LEDs off 
        }
    }
}