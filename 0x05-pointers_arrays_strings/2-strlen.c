#include "main.h"

/**
 *_strlen - String Length
 *@s: String to measure
 *
 *Return: int length of s
 *
 */
int _strlen(char *s)
{
	int i = 0;

	while ((s[i]) != '\0')
		++i;

	return (i);
}
