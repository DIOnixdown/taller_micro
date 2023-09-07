#include <xc.h>
#include "config.h"
#include "display.h"

char contador = 0;
char contador2 = 0;
char acc = 0;
   
void main (void){
    
    ANSELD = 0x00;
    ANSELB = 0x00;
    ANSELA = 0x00;
    TRISAbits.TRISA0 = 1;
    TRISAbits.TRISA1 = 1;
    display_init();
    display_init2();
 

    while(1){
        if(PORTAbits.RA0==1){
            acc = 1;
            display_ac2(contador);
            contador++;
        __delay_ms(100);
        if(contador>9){
            contador=0;
            contador2++;
            }
        display_ac(contador2);
        if(contador2>9){
            contador2=0;
            }
        }
        
        
        if(PORTAbits.RA1==1){
            acc = 2;
            display_ac2(contador);
            contador--;
        __delay_ms(100);
            if(contador>9){
            contador=0;
            contador2--;
            }
        display_ac(contador2);
            if(contador2>9){
            contador2=0;
            }
        }
        
        if((PORTAbits.RA0 == 1) && (PORTAbits.RA1 == 1) ){
            contador = contador;
            contador2 = contador2;
        }
        
        if((PORTAbits.RA0 == 0) && (PORTAbits.RA0 == 0) ){
            if(acc == 1){
                display_ac2(contador);
                contador+=2;
                __delay_ms(100);
            if(contador>9){
                contador=0;
                contador2++;
            }
            display_ac(contador2);
             if(contador2>9){
                contador2=0;
                }
            }
            if(acc == 2){
                display_ac2(contador);
                contador-=2;
                __delay_ms(100);
            if(contador>9){
                contador=0;
                contador2--;
            }
                display_ac(contador2);
            if(contador2>9){
                contador2=0;
                }
            }
        }
    }
    return;
}