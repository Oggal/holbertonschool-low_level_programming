#include "function_pointers.h"

/**
 * array_iterator - Do action on size items of array
 *@array: Array of items to do action on
 *@size: Items in array
 *@action: Thing to do with items in array
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < (int)size; i++)
	{
		action(array[i]);
	}
}
