#include "holberton.h"

/**
 *_strncpy - Copy a string into dest
 *@dest: First and Returned String
 *@src:  String to copy onto the first
 *@n: Max chars to copy
 *Return: Pointer to @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int hitEnd = 0, i = 0;

	while (i < n)
	{
		if (src[i] && !hitEnd)
			dest[i] = src[i];
		else
		{
			dest[i] = '\0';
			hitEnd = 1;
		}
		i++;
	}

	return (dest);
}
