/*
 *PRINT THE LETTERS 10 TIMES LIKE CLOCKWORK
 */
#include "main.h"


/**
 *print_alphabet_x10 - Print letters 10x
 *
 *Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char a;

	for (i = 0; i < 10; i++)
	{
		a = 'a';
		do {
			_putchar(a);
		} while (a++ < 'z');
		_putchar('\n');
	}
}
