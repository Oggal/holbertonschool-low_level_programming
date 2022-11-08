#include "main.h"


/**
 * flip_bits - count the bits that will be flipped
 * @n:Number to be compared
 * @m:Number to compare to
 *
 * Return: Number of differing bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned long int mask = 1;
	unsigned int count = 0;

        while (mask < n || mask < m)
	{
		count += ((n & mask) == (m & mask));
		mask = mask << 1;
	}

	return count;
}
