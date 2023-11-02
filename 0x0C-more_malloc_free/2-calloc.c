#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - the function
 *
 * Description: qllocates memory of nmemb elements of size bytes
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	else
	{
		ptr = malloc(size * nmemb);
		if (ptr == NULL)
			return (NULL);
		for (i = 0; i < size; i++)
		{
			ptr[i] = 0;
		}
		return (ptr);
	}
}
