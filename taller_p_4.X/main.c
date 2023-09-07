#include <xc.h>
#include "config.h"

#define te 100

signed char contador=0;

void main(void){
    
    //CONFIGURA EL PROYECTO
    TRISBbits.TRISB0 = 1;
    ANSELBbits.ANSB0 = 0;
    TRISBbits.TRISB7 = 0;
    
    
    TRISD = 0x00; //CONFIGURAMOS RD0->OUT
    PORTD = 0x00;
    
    //LOOP INFINITO
    while(1){
       
        if( PORTBbits.RB0 == 0 ){
            while(PORTBbits.RB0 == 0);
            contador++;
            if( contador == 3){
            LATBbits.LATB7 ^= 1;
            }
        } 
    __delay_ms(100);    
    }
    
    return;
}

