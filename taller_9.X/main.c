#include <xc.h>
#include "config.h"


void main(void){
    
    TRISBbits.TRISB0 = 0;
    TRISBbits.TRISB1 = 0;
    TRISBbits.TRISB2 = 0;
    TRISAbits.TRISA0 = 1;
    TRISAbits.TRISA1 = 1;
    TRISAbits.TRISA2 = 1;
    TRISAbits.TRISA3 = 1;
    
    while(1){
        
        if(PORTAbits.RA0 == 0){
            while(PORTAbits.RA0 == 0);
            PORTBbits.RB0 = 0;
            PORTBbits.RB1 = 0;
            PORTBbits.RB2 = 1;
            __delay_ms(100);
        }
        if(PORTAbits.RA1 == 0){
            while(PORTAbits.RA1 == 0);
            PORTBbits.RB0 = 0;
            PORTBbits.RB1 = 1;
            PORTBbits.RB2 = 0;
            __delay_ms(100);
        }
        if(PORTAbits.RA2 == 0){
            while(PORTAbits.RA2 == 0);
            PORTBbits.RB0 = 1;
            PORTBbits.RB1 = 0;
            PORTBbits.RB2 = 0;
            __delay_ms(100);
        }
        if(PORTAbits.RA3 == 0){
            while(PORTAbits.RA3 == 0);
            PORTBbits.RB0 = 0;
            PORTBbits.RB1 = 0;
            PORTBbits.RB2 = 0;
            __delay_ms(100);
        }
    }
    
    return;
}

