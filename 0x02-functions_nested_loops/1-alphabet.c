/************************
 *
 *   Alphabet Game
 * Because I don't like empty heads
 *
 ***********************/
#include "main.h"

/**
 *print_alphabet - Print out the alphabet in lowercase
 *Return: void
 */
void print_alphabet(void)
{
	char i = 'a';

	do {
		_putchar(i);
	} while (i++ < 'z');
	_putchar('\n');
}
