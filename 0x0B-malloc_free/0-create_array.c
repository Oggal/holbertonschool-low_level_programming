#include "main.h"

/**
 *create_array - Dynamically Create Array
 *@size: Size of Array to Create
 *@c: Byte to fill Array with
 *
 *Return: Created Array, or null pointer when things go wrong
 */
char *create_array(unsigned int size, char c)
{
	char *output;
	unsigned int i;

	if (size < 1)
		return (NULL);
	output = malloc(sizeof(char) * size);
	if (output == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		output[i] = c;
	}
	return (output);
}
