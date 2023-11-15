#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - A frunction that frees a 2d array previously created
* @grid: Double poiinter 2d grid
* @height: The height of the grid
*/

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
