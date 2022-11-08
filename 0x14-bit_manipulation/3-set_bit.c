#include "main.h"

/**
 * set_bit - Set a bit to ON
 * @n: Number to modify
 * @index: Bit to Set
 *
 *Return: -1 on fail, otherwise 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (4 * (sizeof(long int))))
		return (-1);
	*n = (*n) | (1 << index);
	return (1);
}
