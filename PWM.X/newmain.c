/*
 * File:   newmain.c
 * Author: VINICIUS
 *         PABLO
 *         GABRIELA
 * 
 * Created on 23 de Novembro de 2022, 15:43
 */


#include <xc.h>

#include "atraso.h"
#include "config_4550.h"

int
main() 
{
    TRISD = 0x00;
    TRISB = 0x00;
    TRISE = 0x00;  
   
    TRISBbits.TRISB0 = 1;
    TRISBbits.TRISB1 = 1;
    TRISBbits.TRISB2 = 1;
    TRISBbits.TRISB3 = 1;
    TRISCbits.RC1 = 0;
    
    CCP1CON = 0x0C; // set PWM mode

    while(1)
    {
        if(TRISBbits.TRISB0 == 0)
        {
            CCPR1L = 50; // 25% duty cycle
        }
        
        if(TRISBbits.TRISB1 == 0)
        {    
            CCPR1L = 100; // 50% duty cycle
            
        }
        
        if(TRISBbits.TRISB2 == 0)
        {
                CCPR1L = 150; // 75% duty cycle

        }
        
        if(TRISBbits.TRISB3 == 0)
        {
        }
        
        if(TRISBbits.TRISB4 == 0)
        {
        }
        
    }
    
    return 0;
}
