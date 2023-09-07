#include <xc.h>
#include "config.h"
#define te 500
char contador = 0;


void main(void){
    TRISD = 0x00;
    TRISAbits.TRISA0 = 1;
    ANSELAbits.ANSA0 = 0;
    TRISAbits.TRISA1 = 1;
    ANSELAbits.ANSA1 = 0;

    while(1){
        PORTD= 0b00000001;
        __delay_ms(te);
        PORTD= 0b00000010;
        __delay_ms(te);
        PORTD= 0b00000100;
        __delay_ms(te);
        PORTD= 0b00001000;
        __delay_ms(te);
        PORTD= 0b00010000;
        __delay_ms(te);
        PORTD= 0b00100000;
        __delay_ms(te);
        PORTD= 0b01000000;
        __delay_ms(te);
        PORTD= 0b10000000;
        __delay_ms(te);
        
        PORTD= 0b10000000;
        __delay_ms(te);
        PORTD= 0b01000000;
        __delay_ms(te);
        PORTD= 0b00100000;
        __delay_ms(te);
        PORTD= 0b00010000;
        __delay_ms(te);
        PORTD= 0b00001000;
        __delay_ms(te);
        PORTD= 0b00000100;
        __delay_ms(te);
        PORTD= 0b00000010;
        __delay_ms(te);
        PORTD= 0b00000001;
        __delay_ms(te);


    }

    return;
}

