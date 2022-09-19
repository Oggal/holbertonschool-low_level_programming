#include "main.h"

/**
 *put2char - Write a 2 digit number
 *@n: int - Number to be wrote
 *Return: void
 */
void put2char(int n)
{
	if (n < 10)
		_putchar('0');
	else
		_putchar('0' + (n / 10));
	_putchar('0' + (n % 10);
}

/**
 *jack_bauer - Print every minute of the day.
 *
 *
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			put2char(h);
			_putchar(':');
			put2char(m);
			_putchar('\n');
		}
	}
}
