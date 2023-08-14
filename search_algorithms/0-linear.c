#include "search_algos.h"

/**
 * linear_search - Search Array for Element value
 * @array: Array to search
 * @size: Size of array
 * @value: Value to be found
 *
 * Return: Index of first Value or -1
*/
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%i] = [%i]", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
