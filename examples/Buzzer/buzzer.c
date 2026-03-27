#include "buzzer.h"

static volatile uint16_t toggle_limit = 0;
static volatile uint16_t toggle_count = 0;

void buzzer_init(void) {
    DDRD |= (1 << PD2); // Keep PD2
    TCCR2 = 0;
}

void buzzer_start_tick(uint8_t duration_ms) {
    toggle_count = 0;
    toggle_limit = duration_ms * 2;
    TCNT2 = 0;
    OCR2 = 124;

    TIMSK |= (1 << OCIE2);
    // CTC Mode, but NO COM20 (no hardware toggle)
    TCCR2 = (1 << WGM21) | (1 << CS22); 
}

ISR(TIMER2_COMP_vect) {
    // Manually toggle PD2 since hardware can't reach it
    PORTD ^= (1 << PD2); 
    
    toggle_count++;
    if (toggle_count >= toggle_limit) {
        TCCR2 = 0;
        TIMSK &= ~(1 << OCIE2);
        PORTD &= ~(1 << PD2); // Ensure it stops LOW
    }
}
