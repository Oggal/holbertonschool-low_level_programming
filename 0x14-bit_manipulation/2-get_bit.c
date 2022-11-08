#include "main.h"


/**
 *get_bit - Read Single bit value from number
 *@n:Number to Read bit from
 *@index: bit to read
 *Return: Bit value or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return (n & (1 << index));
}
