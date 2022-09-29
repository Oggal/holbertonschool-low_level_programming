#include "main.h"

/**
 *_memcpy - Fill Memory with constant byte
 *@des: Memory to fill
 *@src: byte to write
 *@n: Distance to Write
 *
 *Return: Memory Filled
 */
char *_memcpy(char *des, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		des[i] = src[i];
	}

	return (des);
}
