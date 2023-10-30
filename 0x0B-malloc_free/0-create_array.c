#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - the function
 *
 * Description: creates array and initialize with a char
 * @size: the size of array
 * @c: the initializing char
 *
 * Return: pointer to array or null if fails or null if size is 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr = (char*)malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	else if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
		return (ptr);
	}
	free (ptr);
}
