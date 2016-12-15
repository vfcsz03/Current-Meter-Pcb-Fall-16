#include "ili9341.h"
#include "snake.h"
#include "gfx.h"

	
	Pixel snake[MAX_LENGTH];
	Pixel food;
	uint8_t head = 0;
	uint8_t length = 3;
	uint8_t score = 0;
	
	void snake_init(){
		clear(BG_COLOR);
		//setup coordinates to draw a snake at the center of the screen
		for(int i = 0;i<3; i++){
			snake[i].x = i+6;
			snake[i].y = 8; 
		}
		food.x = 5;
		food.y = 5;
		head = 2;
	}
	
	void snake_gameOver(){
		clear(ILI9341_WHITE);
	}
	void snake_update(uint8_t x){
		switch(x){
		        case 3:
		        if(snake[head].x == 0) {
			        snake_gameOver();
			        //break;
		        }
		        snake[(head+1) % MAX_LENGTH].x = snake[head].x-1;
		        snake[(head+1) % MAX_LENGTH].y = snake[head].y;
		        head = (head+1) % MAX_LENGTH;
		        break;
		        case 2:
		        if(snake[head].x > X_AXIS-2) {
			        snake_gameOver();
			        //break;
		        }
		        snake[(head+1) % MAX_LENGTH].x = snake[head].x+1;
		        snake[(head+1) % MAX_LENGTH].y = snake[head].y;
		        head = (head+1) % MAX_LENGTH;
		        break;
		        case 4:
		        if(snake[head].y ==0) {
			        snake_gameOver();
			        //break;
		        }
		        snake[(head+1) % MAX_LENGTH].x = snake[head].x;
		        snake[(head+1) % MAX_LENGTH].y = snake[head].y-1;
		        head = (head+1) % MAX_LENGTH;
		        break;
		        case 1:
		        if(snake[head].y > Y_AXIS-2) {
			        snake_gameOver();
			        //break;
		        }
		        snake[(head+1) % MAX_LENGTH].x = snake[head].x;
		        snake[(head+1) % MAX_LENGTH].y = snake[head].y+1;
		        head = (head+1) % MAX_LENGTH;
		        break;
	        }
	}
		
		void checkCollision(){
			uint8_t oldHead = head-1;
			uint8_t oldLength = length -1 ;
			if (oldHead<0){
				oldHead = MAX_LENGTH -1 ;
			}
			while(oldLength>0){
				if(snake[oldHead].x == snake[head].x && snake[oldHead].y == snake[head].y ){
					snake_gameOver();
				}
				oldLength--;
			}
			if(oldHead>0){
				oldHead--;
			}
			else{
				oldHead = MAX_LENGTH -1 ;
			}
			
		}
		void Snake_display(){
			checkCollision();
			if(snake[head].x == food.x && snake[head].y == food.y ){
				length++;
				score++;
				food.x = 1;
				food.y =1;
			}
			else{
				fillrect(food.x, food.y,PIXEL_SIZE, PIXEL_SIZE, FOOD_COLOR);
			}
			//draw snake head
			for(int i = 0; i <length; i++){
				fillrect(snake[i].x, snake[i].y, PIXEL_SIZE,PIXEL_SIZE, SNAKE_COLOR);
			}
			fillrect(snake[head].x, snake[head].y, PIXEL_SIZE, PIXEL_SIZE, HEAD_COLOR);
		}
		