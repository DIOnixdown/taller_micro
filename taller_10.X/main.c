#include <xc.h>
#include "config.h"

void main(void){
    
    TRISAbits.TRISA0 = 0;
    TRISBbits.TRISB0 = 1;
    TRISBbits.TRISB1 = 1;

    while(1){
       
       if(PORTBbits.RB0 == 0){
            while(PORTBbits.RB0 == 0);
            PORTAbits.RA0 ^= 1;
            __delay_ms(100);

        } 
        if(PORTBbits.RB1 == 0){
            while(PORTBbits.RB0 == 0);
            PORTAbits.RA0 ^= 1;
            __delay_ms(100);

        }
        
        
        
        
        
        
    }  
  return;  
}
