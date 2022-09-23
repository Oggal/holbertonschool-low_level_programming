#include "main.h"

/**
 *_puts - Print a String
 *@s: String to print
 *
 */
void print_rev(char *s)
{
	int i = sizeof(s) * 2;
	
	for (i = i - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
