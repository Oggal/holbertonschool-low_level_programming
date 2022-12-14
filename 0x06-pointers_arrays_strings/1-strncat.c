#include "holberton.h"

/**
 *_strncat - Concatenate two strings
 *@dest: First and Returned String
 *@src:  String to append onto the first
 *@n: Max chars to copy
 *Return: Pointer to @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i = 0;

	while (dest[len++])
		;
	len--;
	while (n > i && src[i])
	{
		dest[len + i] = src[i];
		i++;
	}
	if (i == n && dest[len + i] != '\0')
		dest[len + i] = '\0';
	return (dest);
}
