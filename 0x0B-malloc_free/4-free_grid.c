#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees the memory for the matrix alloc_grid
 * @grid: Matrix argument
 * @height: Matrix height
 **/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
}
