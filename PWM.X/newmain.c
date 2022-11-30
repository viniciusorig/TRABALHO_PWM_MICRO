#include <xc.h>

#include "atraso.h"
#include "config_4550.h"
#include "lcd.h"

void main(void) {
    
    TRISCbits.RC1 = 0; //ventilador
    
    TRISD = 0x00;
    TRISB = 0x00;
    TRISE = 0x00;  
   
    TRISBbits.TRISB0 = 1;
    TRISBbits.TRISB1 = 1;
    TRISBbits.TRISB2 = 1;
    TRISBbits.TRISB3 = 1;
    
    PR2 = 199; // period value
    
   
    // PWM CCP2

    
    // configure timer 2
    T2CON = 0; // 
    TMR2 = 0; // clear timer 2 
    TMR2ON = 1; // habilita timer 2
    lcd_init();
    lcd_cmd(L_CLR);
    
    while(1)
    {         
        if(PORTBbits.RB0 == 0)
        {
            lcd_cmd(L_L1);
            lcd_str("0%"); 
            CCP2CON = 0x0C;
            CCPR2L = 0; // duty cycle 50%
        }
        if(PORTBbits.RB1 == 0)
        { 
            lcd_cmd(L_L1);
            lcd_str("25%"); 
            CCP2CON = 0x0C;
            CCPR2L = 50;
             
        }
        if(PORTBbits.RB2 == 0)
        {
            lcd_cmd(L_L1);
            lcd_str("50%"); 
            CCP2CON = 0x0C;
            CCPR2L = 75;
        }
        if(PORTBbits.RB3 == 0)
        {
            lcd_cmd(L_L1);
            lcd_str("100%"); 
            CCP2CON = 0x0C;
            CCPR2L = 150;
        }
    }

}