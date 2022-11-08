#include "main.h"

/**
 *clear_bit - Set a bit to OFF
 *@n: Number to Modify
 *@index: Bit to Clear
 *
 * Return: -1 on Fail, otherwise 1;
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long mask = 1;


	if (index > (4 * sizeof(long int)))
		return (-1);
	mask = ~(1 << index);
	*n = (*n) & mask;
	return (1);
}
