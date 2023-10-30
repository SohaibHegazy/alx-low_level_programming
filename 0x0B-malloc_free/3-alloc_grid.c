#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - the function
 *
 * Description: makes 2D array
 * @width: no. of columns of 2D array
 * @height: no. of rows in 2D array
 *
 * Return: array pointer or NULL if failure
 */

int **alloc_grid(int width, int height)
{
	int **ptr = NULL;
	int size = 0;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		size = width * height;
		ptr = (int **)malloc(size, sizeof(int));
		if (ptr == NULL)
		{
			return (NULL);
			free(ptr);
		}
		else
		{
			for (i = 0; i < height; i++)
			{
				for (j = 0; j < width; j++)
				{
					ptr[i][j] = 0;
				}
				j = 0;
			}
			return (ptr);
		}
	}
	free(ptr);
}
