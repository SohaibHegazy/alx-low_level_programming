#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - the function
 *
 * Description: creates array with ordered elements from min to max
 * @min: input of min vlaue
 * @max: input of max value
 *
 * Return: pointer to the array or null if failure
 */

int *array_range(int min, int max)
{
	int i, n, m;
	int *ptr;

	if (min > max)
		return (NULL);

	m = min;
	n = max - min + 1;
	ptr = malloc(sizeof(int) * n);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
	{
		ptr[i] = m;
		m++;
	}
	return (ptr);
}
