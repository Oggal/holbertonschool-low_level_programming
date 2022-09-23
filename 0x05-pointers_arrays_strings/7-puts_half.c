#include "main.h"

/**
 *puts_half - String Slice And Dice
 *@s: String to Chop
 *
 */
void puts_half(char *s)
{
	int i = 0;

	while (s[i++] != '\0')
		;
	if (i % 2 != 0)
		i--;
	i /= 2;
	while ((s[i]) != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
