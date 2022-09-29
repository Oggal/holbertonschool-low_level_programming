#include "holberton.h"

/**
 *cap_string
 *@s: String to Cap
 *
 *Return: @s, but modified
 */
char *cap_string(char *s)
{
	int offest = ('A' - 'a');
	int changeNext = 1, i, j;

	for (int i = 0; s[i]; i++)
	{
		if (isDelim(s[i]))
		{
			changeNext = 1;
			continue;
        	}
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] += offest;
		changeNext = 0;
	}

	return (s);
}

/**
 *isdelim - Test Char to see if is delim
 *@c Char to test
 *
 *Return: 1 is delim, 0 is not
 */
int isdelim(char c)
{
	char delim[] = {' ', '\t', '\n', ',', ';', '.',
			'!', '?', '\"', '(', ')', '{', '}'};
	/*if is delim*/
	for (j = 0; delim[j]; j++)
	{
		if(s[i] == j[i]){
			return (1);
		}
	}

	return (0);
}
