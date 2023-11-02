#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - the function
 *
 * Description: reallocate memory
 * @ptr: pointer to old alocated memory
 * @old_size: old size of memory
 * @new_size: new size of memory
 *
 * Return: pointer to new allocation, or null if failure
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free (ptr);
		return (NULL);
	}

	if (old_size < new_size)
		min_size = old_size;
	else
		min_size = new_size;

	m = malloc(new_size);
	if (m == NULL)
		return (NULL);

	for (i = 0; i < min_size; i++)
		m[i] = ptr[i];
	return (m);
	free (m);
}
