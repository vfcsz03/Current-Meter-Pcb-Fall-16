/*
 * LCD_ILI9341_ESE_323.c
 *
 * Created: 11/29/2016 2:21:02 PM
 * Author : radrajith
 */ 


//for using printf, go to device programming- toolchain- general check  "Use vprintf library(-WI,-u,vfprintf)"
// go to miscellaneous tab and add "-Wl,-lprintf_flt"		//without quotes

#include <avr/io.h>
#include "ili9341.h"
#include "gfx.h"
#include "adc.h"
//#include "snake.h"
#include <avr/interrupt.h>
# define F_CPU 1000000UL 
int buf[318];
void rotate(){
	setRotation(2);
}
void readADC(){
	adc_init(POS_ADC0, NEG_ADC1);		//the adc used for pos  d neg are passed in
	double voltage = adc_get();
	char value[5];
	sprintf(value, "%.3f", voltage);
	gfx_setCursor(20,160);
	gfx_print(value);
	double voltage1 = voltage/4095;
	//voltage1 = (voltage1)/32;
	gfx_setCursor(20,180);
	sprintf(value, "%.3f", voltage1);
	gfx_println(value);
	//return value;
    }
void startupScreen(){
	int color = 0;
	int a = 0;
	int axis = 0;
	for(int i = 0; i<((TFTWIDTH-130)/2) ; i=i+5){
		if((a%2) == 0){
			color = ILI9341_WHITE;
		}
		else{
			color = ILI9341_BLACK;
		}
		a++;
		fillrect(i,i, (TFTWIDTH-(2*i)), (TFTHEIGHT-(2*i)), color);
		axis = i;
	}
	gfx_setCursor(axis+10, axis+10);
	gfx_setTextColor(ILI9341_RED);
	gfx_setTextSize(3);
	//setRotation(3);
	gfx_print("ESE 323");

	_delay_ms(15000);
}

int main(void)
{
	begin();					//initialize spi driver
	setRotation(3);
	clear(ILI9341_BLACK);
	//fillScreen();				//random background generator
	gfx_setTextColor(ILI9341_YELLOW);
	gfx_setCursor(20, 20);
	gfx_setTextSize(4);
	//gfx_setBgColor(ILI9341_WHEAT);
	gfx_print("Hello World");
	
	gfx_setTextSize(3);
	gfx_setTextColor(ILI9341_YELLOW);
	gfx_setCursor(20, 80);
	gfx_print("Fall 2016");
	gfx_setTextColor(ILI9341_CADETBLUE);
	gfx_setCursor(20,120);
	gfx_print("ESE 323");
	int col = ILI9341_GREEN;
	int w =0;
	while(1)
	{
		if(w==255){
			w=0;
		}
		int colors = 0;
		
		int c=1, y=0, z=0;
		for(int i=1; i<(318*20); i++){
			c++;
			if(c==319)
			c=1;
			if(i>319){
				if((c==159)||(buf[c-1]==119))
				colors= ILI9341_BLUE;
				else
				colors= ILI9341_WHITE;
				drawPixel(c, buf[c-1],colors);
			}
			y= 119 +(sin(((i*1.1)*3.14)/180)*(90-(i/100)));
			drawPixel(c,y, col);	
		}
		if(w%2==1){
		 col = ILI9341_RED;
		}
		else{
		 col = ILI9341_GREEN;
		}
		w++;
		buf[c-1]=y;
	}
}
