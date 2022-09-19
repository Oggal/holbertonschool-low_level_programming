#include "main.h"

/**
 *put2char - Write a 2 digit number
 *@n: int - Number to be wrote
 *Return: void
 */
void put2char(int n)
{
	if (n < 10)
		_putchar(' ');
	else
		_putchar('0' + (n / 10));
	_putchar('0' + (n % 10));
}

/**
 *times_table - Print out a formated multiplication table
 *
 *Return: void
 */
void times_table(void)
{
	int x, y;

	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 9; x++)
		{
			if (x == 0)
				_putchar('0');
			else
				put2char(x * y);

			if (x == 9)
				continue;
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
