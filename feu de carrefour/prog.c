#include "D:\PROJETS\FORMATIONHIVER\TP\feu de carr\prog.h"

void main()
{

   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   set_tris_a(0xFF);
   set_tris_b(0x00);
   output_b(0x00);
   
do
{

if (input(PIN_A0)==1)
                      {
                      output_B(0b10010);
                      delay_ms(1000);
                      output_B(0);
                      delay_ms(1000);
                      }  
                     else
                     {
                     output_b(0b100001);
                     delay_ms(5000);
                     output_b(0b000001);
                     delay_ms(500);
                     output_b(0b100001);
                     delay_ms(500);
                     output_b(0b000001);
                     delay_ms(500);
                     output_b(0b100001);
                     delay_ms(500);
                     output_b(0b000001);
                     delay_ms(500);
                     output_b(0b100001);
                     delay_ms(500);
                     output_b(0b010001);
                     delay_ms(1000);
                     output_b(0b001011);
                     delay_ms(1000);                    
                     output_b(0b001100);
                     delay_ms(5000);
                     output_b(0b001000);
                     delay_ms(500);
                     output_b(0b001100);
                     delay_ms(500);
                     output_b(0b001000);
                     delay_ms(500);
                     output_b(0b001100);
                     delay_ms(500);
                     output_b(0b001000);
                     delay_ms(500);                
                     output_b(0b001100);
                     delay_ms(1000);
                     output_b(0b001010);
                     delay_ms(1000);
                     output_b(0b011001);
                     delay_ms(1000);
                      }   
}   
 while(true);  
}
