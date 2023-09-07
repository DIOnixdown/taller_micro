#ifndef DISPLAY_H
#define	DISPLAY_H

#include <xc.h>

#define DIR_segA   TRISBbits.TRISB0
#define DIR_segB   TRISBbits.TRISB1
#define DIR_segC   TRISBbits.TRISB2
#define DIR_segD   TRISBbits.TRISB3
#define DIR_segE   TRISBbits.TRISB4
#define DIR_segF   TRISBbits.TRISB5
#define DIR_segG   TRISBbits.TRISB6

#define segA  LATBbits.LATB0
#define segB  LATBbits.LATB1
#define segC  LATBbits.LATB2
#define segD  LATBbits.LATB3
#define segE  LATBbits.LATB4
#define segF  LATBbits.LATB5
#define segG  LATBbits.LATB6

#define DIR_segA2   TRISDbits.TRISD0
#define DIR_segB2   TRISDbits.TRISD1
#define DIR_segC2   TRISDbits.TRISD2
#define DIR_segD2   TRISDbits.TRISD3
#define DIR_segE2   TRISDbits.TRISD4
#define DIR_segF2   TRISDbits.TRISD5
#define DIR_segG2   TRISDbits.TRISD6

#define segA2  LATDbits.LATD0
#define segB2  LATDbits.LATD1
#define segC2  LATDbits.LATD2
#define segD2  LATDbits.LATD3
#define segE2  LATDbits.LATD4
#define segF2  LATDbits.LATD5
#define segG2  LATDbits.LATD6

#define OUT 0
#define IN  1


void display_init(void);
void display_init2(void);
void display_ac(char dig);
void display_ac2(char dig);


#endif	/* DISPLAY_H */

