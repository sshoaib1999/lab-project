/*
 Lab 1, Exercise 5
 SYED SHOAIB 12/11/19
 */

#include <system.h>
void delay(){
        int i;
        for(i=65535;i!=0;i--);
    }
void main() {
    trisb = 0;
    adcon1 = 0x06;  
while(1){
        portb = 0xff;       // LEDs on
        delay();            // wait a bit
        portb = 0;          // LEDs off
        delay();            // wait a bit
    }
}

