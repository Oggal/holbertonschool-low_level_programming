#include "holberton.h"

/**
 *_strcat - Concatenate two strings
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
	do {
		dest[len + i] = src[i];
	} while (n > ++i && src[i]);
	if(i == n && dest[len+i] != '\0')
		dest[len+i] = '\0';
	return (dest);
}
