#include "main.h"

/**
 *_memset - Fill Memory with constant byte
 *@s: Memory to fill
 *@b: byte to write
 *@n: Distance to Write
 *
 *Return: Memory Filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
