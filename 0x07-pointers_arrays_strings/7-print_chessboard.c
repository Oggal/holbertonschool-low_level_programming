#include "main.h"

/**
 * print_chessboard - print a 8x8 2D array
 *@grid: 2d, 8x8 grid to print
 *
 */
void print_chessboard(char (*grid)[8])
{
	int x, y;

	for (y = 0; y < 8; y++)
	{
		for (x = 0; x < 8; x++)
		{
			_putchar(grid[y][x]);
		}
		_putchar('\n');
	}
}
