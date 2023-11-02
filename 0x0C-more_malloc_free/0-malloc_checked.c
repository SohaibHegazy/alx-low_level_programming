#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - the function
 *
 * Description: allocates memory using malloc
 * @b: input unsigned integer
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	else
	{
		return (ptr);
	}
}
