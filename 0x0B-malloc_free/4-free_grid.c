#include "main.h"
#include <stdlib.h>

/**
 * free_grid - the function
 *
 * Description: free the allocated memory
 * @grid: the 2D array
 * @height: heught of 2D array
 *
 * Return: void
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
