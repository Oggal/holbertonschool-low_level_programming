#include "main.h"

/**
 *print_most_numbers - We print numbers
 */
void more_numbers(void)
{
	int i = 0;
	int j;

	for (; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
			_putnum(j);
		_putchar('\n');
	}
}
/**
 *_putnum - Putchar multidigit numbers
 *@n: int value to print
 *
 *Return: Always 0
 */
int _putnum(int n)
{
	if (n < 10)
	{
		_putchar('0' + n);
	}
	else
	{
		_putnum(n / 10);
		_putchar('0' + (n % 10));
	}
	return (0);
}
