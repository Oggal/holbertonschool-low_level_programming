#include "main.h"
#include <stdio.h>

/**
 *print_array - Print First N items of an array
 *@a: int Array
 *@n: Depth to print
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (a[i])
			printf("%i", a[i]);
		else
			break;
		if (i < (n - 1))
			printf(", ");
	}
	printf("\n");
}
