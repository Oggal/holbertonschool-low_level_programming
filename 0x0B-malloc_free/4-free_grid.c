#include "main.h"

/**
 *free_grid - Free Memory Allocated via alloc_grid
 *@grid: Grid to free
 *@height: Height of Grid to clear
 *
 */
void free_grid(int **grid, int height)
{
	for (; height > 0; height--)
	{
		free(grid[height - 1]);
	}
	free(grid);
}
