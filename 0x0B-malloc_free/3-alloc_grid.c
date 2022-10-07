#include "main.h"

/**
 *alloc_grid - Allocate 2d array
 *@w: Width
 *@h: Height
 *
 *Return: Allocated Grid
 */
int **alloc_grid(int w, int h)
{
	int **o; /*OUTPUT*/
	int i, j;

	if (w < 1 || h < 1)
		return (NULL);
	o = (int **)malloc(sizeof(int *) * h);
	if (o == NULL)
		return (NULL);
	for (i = 0; i < h; i++)
	{
		o[i] = malloc(sizeof(int) * w);
		if (o[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
				free(o[i]);
			free(o);
			return (NULL);
		}
	}
	for (i = 0; i < h; i++)
		for (j = 0; j < w; j++)
			o[i][j] = 0;

	return (o);
}
