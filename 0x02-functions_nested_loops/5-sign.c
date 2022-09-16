#include "main.h"

/**
 *print_sign - Prints the sign of a int
 *@n: Input number to check sign of
 *
 *Return: 1 - pos
 *        0 - zero
 *        -1 - neg
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
