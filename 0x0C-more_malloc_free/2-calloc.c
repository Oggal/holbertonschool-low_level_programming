#include "main.h"

/**
 *_calloc - Allocate Memory for an array
 *@count: Count of Items
 *@size: Size of a item
 *
 *Return: empty array with bytes set to zero
 */
void *_calloc(unsigned int count, unsigned int size)
{
	char *o;
	/*
	 * So, why is output a char pointer and not a void pointer?
	 * Well A char is one byte, unsigned (in theory) and easy to
	 * iterate over. Just need to cast it back to void pointer at the end.
	 */
	unsigned int i;

	/*Handle Size or Count being 0*/
	if (count == 0 || size == 0)
	{
		return (NULL);
	}
	o = malloc(count * size);
	/*Did malloc fail?*/
	if (o == NULL)
	{
		return (NULL);
	}
	/*Initialize all the bytes*/
	for (i = 0; i < (size * count); i++)
		o[i] = 0;

	return ((void *)o);
}
