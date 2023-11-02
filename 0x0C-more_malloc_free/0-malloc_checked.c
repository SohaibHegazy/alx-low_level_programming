#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_checked - the function
 *
 * Description: allocates memory using malloc
 * @b: input unsigned integer
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(sizeof(unsigned int));

	if (ptr == NULL)
	{
		exit(98);
	}
	else
	{
		return (ptr);
	}
}
