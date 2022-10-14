#include "main.h"

/**
 * array_range - Create an array of integers
 * @min: Starting point of the array
 * @max: End point of the array
 *
 * Return: New Array starting at min, ending at max. Include Both.
 */
int *array_range(int min, int max)
{
	int i, range = max - min;
	int *output;

	if (range < 0)
		return (NULL);
	output = malloc(sizeof(int) * (range + 1));
	if (output == NULL)
		return (NULL);
	for (i = 0; i <= range; i++)
	{
		output[i] = (min + i);
	}

	return (output);
}
