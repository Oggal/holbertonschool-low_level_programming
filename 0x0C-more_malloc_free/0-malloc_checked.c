#include "main.h"

/**
 *malloc_checked - Allocate Memory, Ensure it worked
 *@b: Bytes to Allocate
 *
 *Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *o = malloc(b);

	if (o == NULL)
		exit(98);

	return (o);
}
