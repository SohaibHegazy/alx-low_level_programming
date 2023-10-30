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

	if (width <= 48 || height <= 48)
	{
		return (NULL);
	}
	else
	{
		size = width * height;
		*ptr = (int *)calloc(size, sizeof(int));
		return (*ptr);
	}
	free(*ptr);
}
