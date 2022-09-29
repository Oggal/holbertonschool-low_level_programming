#include "holberton.h"

/**
 *cap_string - Capitalize First Letter Of Every Word
 *@s: String to Cap
 *
 *Return: @s, but modified
 */
char *cap_string(char *s)
{
	int offest = ('A' - 'a');
	int changeNext = 1, i;

	for (i = 0; s[i]; i++)
	{
		if (isdelim(s[i]))
		{
			changeNext = 1;
			continue;
		}
		if ((s[i] >= 'a' && s[i] <= 'z') && changeNext)
			s[i] += offest;
		changeNext = 0;
	}

	return (s);
}

/**
 *isdelim - Test Char to see if is delim
 *@c: Char to test
 *
 *Return: 1 is delim, 0 is not
 */
int isdelim(char c)
{
	char delim[] = {' ', '\t', '\n', ',', ';', '.',
			'!', '?', '\"', '(', ')', '{', '}'};
	int j;
	/*if is delim*/
	for (j = 0; delim[j]; j++)
	{
		if (c == delim[j])
			return (1);
	}

	return (0);
}
