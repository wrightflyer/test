# define F_CPU 4000UL
#include <avr/io.h>
#include <util/delay.h>
#include <avr/cpufunc.h>
char i;
int main(void)
{
   
   DDRB=0X01;   
   for (i=0;i<6;i++)
    {
        //TODO:: Please write your application code
   
         PORTB=0x01;
      //   _delay_ms(1000);
         PORTB=0x00;
      //   _delay_ms(1000);
      
    }
   while(1)
   {
      _NOP();      
   }
}; 

