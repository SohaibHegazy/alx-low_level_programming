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

	if (size <= 0)
		return (-1);

	else if (array && size && cmp)
	{
		for (i = 0; i < size && cmp == 0; i++)
		{
			cmp(array[i]);
		}
		if (i == 0)
			return (-1);
		else
			return (i);
	}
	else
		return (-1);
}
