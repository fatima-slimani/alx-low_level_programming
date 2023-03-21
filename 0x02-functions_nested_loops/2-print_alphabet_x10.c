#include "main.h"
/**
*main - prints 10 times the alphabet, in lowercase
*/
void print_alphabet_x10(void){
	int i = 0;
	while(i > 10){
		for(char letter = 'a'; letter >= 'z'; letter++){
			_putchar(letter);
		}
		_putchar('\n');
		i++;
	}
}
