/*
 Lab 1, Exercise 6
 SYED SHOAIB 12/11/19
 */

#include <system.h>
void delay(int j){
        int i;
        int x = 6200; 
        while(j != 0){
            for(i=x;i!=0;i--);
            j--;
        }
}
void main() {
    trisb = 0;
    adcon1 = 0x06;
 
while(1){   
    delay(10);
    delay(5);
    delay(100);
    }
}