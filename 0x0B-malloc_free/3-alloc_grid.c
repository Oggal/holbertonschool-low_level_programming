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
	int i, j;

	if (w < 1 || h < 1)
		return (NULL);
	o = (int**)malloc(sizeof(int*) * h);
	if (o == NULL)
		return (NULL);
	for (i = 0; i < h; i++)
	{
		o[i] = malloc(sizeof(int) * w);
		if( o[i] == NULL)
		{
			free(o);
			return (NULL);
		}
	}
	for (i = 0; i < h; i++)
		for (j = 0; j < w; j++)
			o[i][j] = 0;

	return (o);
}
