#include "main.h"
/**
 * free_grid - free 2D array
 * @grid: function parameter
 * @height: function prameter
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
