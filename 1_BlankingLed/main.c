/*
 * File:   main.c
 * Author: h p
 *
 * Created on December 16, 2019, 9:13 PM
 */


#include <xc.h>
#include <pic16f877a.h>
#include "config.h"

#define _XTAL_FREQ 4000000

void main(void) {
    TRISBbits.TRISB0 = 0;       // LED
    TRISBbits.TRISB1 = 1;       // SWITCH
    
    PORTBbits.RB1 = 0;          // Startup status
    
    while (RB1) {
        RB0 = 1;
        __delay_ms(250);
        RB0 = 0;
        __delay_ms(250);
    }

    
}
