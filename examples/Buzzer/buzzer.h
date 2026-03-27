#ifndef BUZZER_H_
#define BUZZER_H_

#include <avr/io.h>
#include <avr/interrupt.h>

void buzzer_init(void);
void buzzer_start_tick(uint8_t duration_ms);

#endif
