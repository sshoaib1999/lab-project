
/* Lab 1, exercise 8
 SYED SHOAIB 19/11/19
 */

#include <system.h>

void delay(){
    int i;
    for(i=65535; i!=0; i--);
}


void main()
{
    trisb = 0;
    adcon1 =0x06;
    
    while(1){
        if(porta & 16){ // porta = 0x10
            int a = 128; 
            for(int i=0; i<=8;i++){
                portb = a; // portb = 0x80 
                delay();
                a = a/2; // portb = portb >> 1;
            }
        }
        else if(porta & 1){ // porta = 0x01
            while(porta != 16){ //porta = 0x10
                int a = 1;
                for (int i=0; i <= 8; i++){
                    portb = a; // portb = 0x01
                    delay();
                    a = a*2; // portb = portb << 1;
                }
            }
        }
        else{
            int a = 128;
            for(int i = 0; i <= 8; i++){
                portb = a; // portb = 0x80
                delay();
                a = a/2; // portb = portb >> 1;
            }
        }
            
        }
    }

    
