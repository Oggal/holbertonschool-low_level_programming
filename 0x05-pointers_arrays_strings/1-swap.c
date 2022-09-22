#include "main.h"

/**
 *swap_int - Swap 2 values
 *@a: Pointer to A
 *@b: Pointer to B
 */
void swap_int(int *a, int *b)
{
	int t = *a;

	*a = *b;
	*b = t;
}
