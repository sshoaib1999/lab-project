/* Lab 1, exercise 8
 SYED SHOAIB 19/11/19
 */
#include <system.h>


void delay(int j)
{
 int i;
 int x = 12345
 while(j!=0)
 {
 for(i=x; i!=0; i--);     //x=0.1secs/1us=100 000 (10000/0.81)
 j--;
 }
}
void main()
{
 trisb = 0; // set all bits in port B as outputs
 adcon1 = 0x06; // set port A as digital inputs
 while(1)
    {
        if((porta & 0x10) != 0) // switch 4 
            {
                portb = porta; // copy the switches to the LEDs
            }        
        else if ((porta & 0x08) != 0)  // switch 3
            {
                char i;
                portb = 0x80; 
                for(i=0; i<8; i++)
                    {
                        portb = portb>>1; // moves left to right
                        delay(1);
                    }
                portb = 0x01; 
                for(i=0; i<8; i++)
                    {
                        portb = portb<<1; // moves right to left
                        delay(1);
                    }
            }
            else if ((porta & 0x04) != 0) // switch 2
                {
                    char i;
                    portb = 0x80; 
                    for(i=0; i<8; i++)
                        {
                            portb = portb>>1; // moves from left to right 
                            delay(1);
                        }
                }
            else if ((porta & 0x02) != 0) // switch 1
                {
                    char i;
                    portb = 0x01; 
                    for(i=0; i<8; i++)
                        {
                            portb = portb<<1; // moves from right to left
                            delay(1);
                        }
                }
        else if ((porta & 0x01) != 0) // switch 0
        {
            portb = 0xff; // all LEDs on
        }
        
                else
                    {
                        portb = 0; // put all LEDs off
                    }
        }
    }
