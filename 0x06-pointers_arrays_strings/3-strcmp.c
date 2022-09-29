#include "holberton.h"

/**
 *_strcmp - Compare 2 Strings
 *@s1: StringA
 *@s2: StringB
 *
 *Return: Int value diffrence in strings
 */
int _strcmp(char *s1, char *s2)
{

	int i;

	for (i = 0; s1[i] && s2[i] && s1[i] == s2[i]; i++)
		;

	return (s1[i] - s2[i]);
}
