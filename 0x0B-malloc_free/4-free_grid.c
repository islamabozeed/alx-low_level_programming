#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function
 * @grid: int 
 * @height: height
 */
void free_grid(int **grid, int height)
{
	int x;

	if (grid == NULL || height == 0)
		return;

	for (x = 0; x < height; x++)
		free(grid[x]);

	free(grid);
}
