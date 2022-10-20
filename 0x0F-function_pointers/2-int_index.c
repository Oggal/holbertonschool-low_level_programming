#include "function_pointers.h"

/**
 * int_index - Find element that matches cmp
 *@array: array of elements to search
 *@size: size of array to search
 *@cmp: function used for comparison
 *
 *Return: index of first element matching cmp, or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (!cmp(array[i]))
			return (i);
	}

	return (-1);
}
