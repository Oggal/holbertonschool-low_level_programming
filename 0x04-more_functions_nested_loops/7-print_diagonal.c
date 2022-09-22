#include "main.h"

/**
 *print_diagonal - Print a line of '\' characters
 *@x: Number of lines
 *
 */
void print_diagonal(int x)
{
	int i, j;

	for (i = 0; i < x; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
	}
}
