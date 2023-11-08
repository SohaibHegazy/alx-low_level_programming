#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - the function
 *
 * Description: compares integers
 * @array: input array
 * @size: array size
 * @cmp: compare function
 *
 * Return: number of first element that doesn't match or -1 if error
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}
	return (-1);
}
