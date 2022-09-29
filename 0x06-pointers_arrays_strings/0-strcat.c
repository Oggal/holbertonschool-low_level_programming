#include "holberton.h"

/**
 *_strcat - Concatenate two strings
 *@dest: First and Returned String
 *@src:  String to append onto the first
 *
 *Return: Pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i = 0;

	while (dest[len++])
		;
	len--;
	do {
		dest[len + i] = src[i];
	} while (src[i++]);

	return (dest);
}
