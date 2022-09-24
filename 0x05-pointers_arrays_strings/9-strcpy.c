#include "main.h"

/**
 *_strcpy - Copy String to Buffer
 *@dest: Destionation Char Buffer
 *@src:  Source Char Pointer
 *
 *Return: Pointer to Copied String
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
