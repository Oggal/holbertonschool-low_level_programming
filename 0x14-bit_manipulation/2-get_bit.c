#include "main.h"


/**
 *get_bit - Read Single bit value from number
 *@n:Number to Read bit from
 *@index: bit to read
 *Return: Bit value or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (4 * sizeof(long int)))
		return (-1);
	return (n & (1 << index));
}
