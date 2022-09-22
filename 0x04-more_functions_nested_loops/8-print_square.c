#include "main.h"

/**
 *print_square - Make a Hash Square
 *@size: Size of Square
 *
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	int x, y;

	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
			_putchar('#');
		_putchar('\n');
	}
}
