#include "main.h"

/**
 *print_diagsums - printf diagsums
 *@a: 2D Square Array Pointer
 *@s: Size of Array Square
 *
 */
void print_diagsums(int *a, int size)
{
	int sumA = 0, sumB = 0, i = 0;

	while (i < size)
	{
		sumA += a[(i * size) + i];
		i++;
		sumB += a[(i * size) - i];
	}
	printf("%i, %i", sumA, sumB);
}
