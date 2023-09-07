#include <xc.h>
#include "config.h"






void main(void){
    TRISD= 0x00;
    TRISAbits.TRISA0 = 1;
    ANSELAbits.ANSA0 = 0;
    TRISAbits.TRISA1 = 1;
    ANSELAbits.ANSA1 = 0;

    while(1){
        
        if(PORTAbits.RA0 == 1 && PORTAbits.RA1 == 0){
            
            LATDbits.LATD0 = 1;
            LATDbits.LATD1 = 0;
            
        }else if(PORTAbits.RA0 == 0 && PORTAbits.RA1 == 1){
            
            LATDbits.LATD0 = 0;
            LATDbits.LATD1 = 1;
            
        }else{
            LATDbits.LATD0 = 0;
            LATDbits.LATD1 = 0;
        }

    }       
    return;
}
