#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * previously created by your alloc_grid function
 * @grid: pointer to grid
 * @height: the grid height
 * Description:
 * Return: void
 */
void free_grid(int **grid, int height);
{
	if (!grid || height <= 0)
		return;

	while (height--)
		if (grid[height])
			free(grid[height]);
	free(grid);
}
