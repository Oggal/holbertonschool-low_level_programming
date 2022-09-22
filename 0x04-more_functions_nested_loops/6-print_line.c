#include "main.h"

/**
 *print_line - Print a line of _
 *@x: Number of _ to print
 *
 */
void print_line(int x)
{
	int i;

	for (i = 0; i < x; i++)
		_putchar('_');
	_putchar('\n');
}
