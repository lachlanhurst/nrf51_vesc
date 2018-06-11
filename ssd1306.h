#ifndef SSD1306_H
#define SSD1306_H

#include <stdbool.h>
#include <stdint.h>

#include "nordic_common.h"

#define SSD1306ADDR 0x3C

/* TWI instance ID. */
#define TWI_INSTANCE_ID 0

#define BLACK 0
#define WHITE 1
#define INVERSE 2


void ssd1306_clear();
void ssd1306_display();
bool ssd1306_init();
void ssd1306_inverse(bool);

void twi_init(void);

#endif
