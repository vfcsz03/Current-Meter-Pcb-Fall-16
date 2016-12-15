#include <avr/io.h>
#include <avr/pgmspace.h>
#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>


#ifndef GFX_H
#define GFX_H

void gfx_drawChar(int16_t x, int16_t y, char c, uint16_t color, uint16_t bg, uint8_t size);
void gfx_setCursor(uint16_t x, uint16_t y);
void gfx_setTextColor(uint16_t color);
void gfx_setBgColor(uint16_t color);
void gfx_setTextSize(uint8_t size);
void gfx_print(char *string);
//void gfx_printInt(int val);
void gfx_printVal(double d);
void gfx_write(char c);
void gfx_backupLocationVset(void);
void gfx_backupLocationVactual(void);
void gfx_backupLocationIset(void);
void display_init(void);

#endif