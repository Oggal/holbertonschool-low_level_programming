#include "search_algos.h"

/**
* binary_search - Seach array using binary search algro
* @array: array to search
* @size: size of array
* @value: value to find
*
* Return: Index of Value
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	int res = -1;
	/*Fail Checks*/
	if (!array || !size)
		return (-1);
	printf("Searching in array: ");
	print_array(array, size);
	i = size / 2;

	if (value < array[i] && size != 1)
		res = binary_search(array, i, value);
	else if (value > array[i] && size != 1)
	{
		res = binary_search((array + i), i + (size % 2), value);
		if (res != -1)
			res += i;
	}
	else
		if (value == array[i])
		{
			res = (int)i;
		}

	return (res);
}


/**
* print_array - Prints Values of an array and a new line
* @array: Array to print
* @size: size of array
*/
void print_array(int *array, size_t size)
{
	size_t i = 0;

	printf("%i", array[i]);
	for (i = 1; i < size; i++)
		printf(", %i", array[i]);

	printf("\n");
}
