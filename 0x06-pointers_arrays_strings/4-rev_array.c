#include "holberton.h"

/**
 *reverse_array - Reverse the content of an int array
 *@a: Arrray to Reverse
 *@n: Array length
 *
 */
void reverse_array(int *a, int n)
{

	int temp, i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - (i + 1)];
		a[n - (i + 1)] = temp;
	}
}
