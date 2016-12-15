#define PIXEL_SIZE 20
#define X_AXIS 12
#define Y_AXIS 16
#define MAX_LENGTH (X_AXIS*Y_AXIS)
#define BG_COLOR ILI9341_WHITE
#define SNAKE_COLOR ILI9341_BLUE
#define HEAD_COLOR ILI9341_CYAN
#define FOOD_COLOR ILI9341_RED
#include "ili9341.h"
#include "gfx.h"

#ifndef SNAKE_H
#define  SNAKE_H



//code references taken from https://github.com/jake314159/avr-snake
typedef struct Pixel {
	uint8_t x, y;
}Pixel;



void snake_init();

void snake_gameOver();
void snake_update(uint8_t x);

void checkCollision();
void Snake_display();
#endif