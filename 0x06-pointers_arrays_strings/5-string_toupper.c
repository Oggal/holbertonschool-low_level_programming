#include "holberton.h"

/**
 *string_toupper - UPPERCASE THAT STRING
 *@s: String to Upper
 *
 *Return: Oringinal String, uppered
 */
char * string_toupper(char *s)
{
	int i = 0;
	while(*(s + i))
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] += 'A' - 'a';
		i++;
	}

	return (s);
}
