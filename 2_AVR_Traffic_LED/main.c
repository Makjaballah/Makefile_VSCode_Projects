/*
 * Project_Name    :   AVR_Traffic_LED
 * File_Name       :   main.c
 * Author          :   Mohamed Akram JABALLAH
 * Target          :   Atmega328p
*/


#include <avr/io.h>
#include <util/delay.h>



#define RED      PC3
#define YELLOW   PC4
#define GREEN    PC5

int main() {

	int state = 0;
	DDRC = (1 << PC3) | (1 << PC4) | (1 << PC5);

	for(;;) {
		
		PORTC &= ~((1 << RED) | (1 << YELLOW) | (1 << GREEN));

		switch(state) {
			case 0:
				PORTC |= (1 << GREEN);
				_delay_ms(1000);
				state ++;
				break;
			case 1:
				PORTC |= (1 << YELLOW);
				_delay_ms(500);
				state ++;
				break;
			case 2:
				PORTC |= (1 << RED);
				_delay_ms(1000);
				state ++;
				break;
			case 3:
				PORTC |= (1 << RED) | (1 << YELLOW);
				_delay_ms(500);
				state = 0;
				break;
			default:
				break;
		}
	}
	return 0;
}
	
