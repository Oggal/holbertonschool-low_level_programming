#include "main.h"

/**
 *alloc_grid
 *@w: Width
 *@h: Height
 *
 *Return:
 */
int **alloc_grid(int w, int h)
{
	int **o; /*OUTPUT*/
	int i;

	if (w < 1 || h < 1)
		return (NULL);
	o = malloc(sizeof(int) * (w * h));
	if (o == NULL)
		return (NULL);
	for (i = 0; i < (w * h); i++)
		*(o + i) = 0;

	return (o);
}
