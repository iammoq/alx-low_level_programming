#include "main.h"
#include <stdlib.h>
/**
 * free_grid - allocates a grid, make space and free space
 * @grid: width of grid
 * @height: height of grid
 * Return: grid
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
