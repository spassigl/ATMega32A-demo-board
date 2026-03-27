#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include "buzzer.h"

int main(void) {

    buzzer_init();
    sei(); // Global interrupts MUST be on

    while (1) {
        buzzer_start_tick(25); // Start the beep
        // This delay represents your main code running.
        // The buzzer is handled entirely by the Timer2 ISR now.
        _delay_ms(1000); 
    }
}

