#include "main.h"

/**
 *print_triangle - Print a # Triangle
 *@size: Size of Triangle
 *
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (j = (size - 1); j >= 0; j--)
		{
			if (j > i)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
