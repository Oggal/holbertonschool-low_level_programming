#include "main.h"


/**
 * print_binary - print a binary representation of number
 * @n: Number to print
 */
void print_binary(unsigned long int n)
{
	unsigned long int one = 1;

	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar('0' + (n & one));
}
