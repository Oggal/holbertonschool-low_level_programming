#include "main.h"

/**
 *_puts - Print a String
 *@s: String to print
 *
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		_putchar(s[i++]);
	_putchar('\n');
}
