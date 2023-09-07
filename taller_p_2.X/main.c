#include <xc.h>
#include "config.h"
#define te 100
char i;


void main(void){
    TRISD= 0x00;
    TRISAbits.TRISA0 = 1;
    ANSELAbits.ANSA0 = 0;
    TRISAbits.TRISA1 = 1;
    ANSELAbits.ANSA1 = 0;

    while(1){
        for(i = 0; i<8; i++) {
            PORTD = (1<<i);
            __delay_ms(te);
        }
        for(i = 6; i>=1; i--) {
            PORTD = (1<<i);
            __delay_ms(te);
        }
    }       
    return;
}

//siento que de la primera forma se tiene mas control de lo que esta ocurriendo y como esta funcionando el
//codigo, con la mascara es mas rapido pero al tener menos lineas no se tiene mucho control de lo que ocurre
//entonces pienso que es mas conveniente de la primera forma
