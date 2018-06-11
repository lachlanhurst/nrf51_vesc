#ifndef SSD1306_H
#define SSD1306_H

#include <stdbool.h>
#include <stdint.h>

#include "nordic_common.h"

#define SSD1306_ADDR 0x3C
#define SSD1306_SDA 30
#define SSD1306_SCL 7

#define SSD1306_WIDTH 128
#define SSD1306_HEIGHT 64

#define SSD1306_BUFFER_PAGE_SIZE 128

/* TWI instance ID. */
#define TWI_INSTANCE_ID 0

#define BLACK 0
#define WHITE 1
#define INVERSE 2


int16_t ssd1306_width(void);
int16_t ssd1306_height(void);
// this one clears the ssd1306 chip (and display)
void ssd1306_clear();
// this one clears only the nrf buffer
void ssd1306_clear_buffer(void);
void ssd1306_display();
void ssd1306_draw_fast_hline(int16_t x, int16_t y, int16_t w, uint16_t color);
void ssd1306_draw_fast_hline_internal(int16_t x, int16_t y, int16_t w, uint16_t color);
void ssd1306_draw_fast_vline(int16_t x, int16_t y, int16_t h, uint16_t color);
void ssd1306_draw_fast_vline_internal(int16_t x, int16_t __y, int16_t __h, uint16_t color);
void ssd1306_draw_circle(int16_t x0, int16_t y0, int16_t r, uint16_t color);
void ssd1306_draw_circle_helper(int16_t x0, int16_t y0, int16_t r, uint8_t cornername, uint16_t color);
void ssd1306_fill_circle(int16_t x0, int16_t y0, int16_t r, uint16_t color);
void ssd1306_fill_circle_helper(int16_t x0, int16_t y0, int16_t r, uint8_t cornername, int16_t delta, uint16_t color);
void ssd1306_draw_line(int16_t x0, int16_t y0, int16_t x1, int16_t y1, uint16_t color);
void ssd1306_draw_rect(int16_t x, int16_t y, int16_t w, int16_t h, uint16_t color);
void ssd1306_fill_rect(int16_t x, int16_t y, int16_t w, int16_t h, uint16_t color);
void ssd1306_fill_screen(uint16_t color);
void ssd1306_draw_round_rect(int16_t x, int16_t y, int16_t w, int16_t h, int16_t r, uint16_t color);
void ssd1306_fill_round_rect(int16_t x, int16_t y, int16_t w, int16_t h, int16_t r, uint16_t color);
void ssd1306_draw_triangle(int16_t x0, int16_t y0, int16_t x1, int16_t y1, int16_t x2, int16_t y2, uint16_t color);
void ssd1306_fill_triangle( int16_t x0, int16_t y0, int16_t x1, int16_t y1, int16_t x2, int16_t y2, uint16_t color);
void ssd1306_draw_bitmap(int16_t x, int16_t y, const uint8_t *bitmap, int16_t w, int16_t h, uint16_t color);
void ssd1306_draw_bitmap_bg(int16_t x, int16_t y, const uint8_t *bitmap, int16_t w, int16_t h, uint16_t color, uint16_t bg);
void ssd1306_draw_xbitmap(int16_t x, int16_t y, const uint8_t *bitmap, int16_t w, int16_t h, uint16_t color);
size_t ssd1306_write(uint8_t c);
void ssd1306_draw_char(int16_t x, int16_t y, uint8_t c, uint16_t color, uint16_t bg, uint8_t size);
void ssd1306_set_cursor(int16_t x, int16_t y);
int16_t ssd1306_get_cursor_x(void);
int16_t ssd1306_get_cursor_y(void);
void ssd1306_set_textsize(uint8_t s);
void ssd1306_set_textcolor(uint16_t c);
void ssd1306_set_textcolor_bg(uint16_t c, uint16_t b);
void ssd1306_set_textwrap(bool w);
uint8_t ssd1306_get_rotation(void);
void ssd1306_set_rotation(uint8_t x);
void ssd1306_cp437(bool x);
void ssd1306_putstring(char* buffer);
void ssd1306_puts(char* buffer);
bool ssd1306_init();
void ssd1306_inverse(bool);
void ssd1306_setup();

void twi_init(void);

#endif
