#include <xc.h>
#include "config.h"

int val_sec;
  
void main(void){
    
    TRISD  = 0x00;
    ANSELB = 0x00;
    TRISB  = 0xF0;
    
    while(1){
        val_sec = (PORTB & 0xF0)>>4;
        switch(val_sec){
            case 1: Secuencia01(); break;
            case 2: Secuencia02(); break;
            case 3: Secuencia03(); break;
            case 4: Secuencia04(); break;
            case 5: Secuencia05(); break;
            case 6: Secuencia06(); break;
            case 7: Secuencia07(); break;
            case 8: Secuencia08(); break;
            case 9: Secuencia09(); break;
        }
        __delay_ms(100);
    }
    
    return;
}




