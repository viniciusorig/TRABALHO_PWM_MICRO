# 1 "atraso.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 288 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "C:/Program Files/Microchip/MPLABX/v6.00/packs/Microchip/PIC18Fxxxx_DFP/1.3.36/xc8\\pic\\include\\language_support.h" 1 3
# 2 "<built-in>" 2
# 1 "atraso.c" 2
# 26 "atraso.c"
void atraso_ms(unsigned int valor)
{
unsigned int i;
unsigned char j;

 for (i =0; i< valor; i++)
 {

  for (j =0 ; j < 200; j++)
   {
      __asm("NOP");
      __asm("NOP");
      __asm("NOP");
      __asm("NOP");
      __asm("NOP");
   }
 }
}
