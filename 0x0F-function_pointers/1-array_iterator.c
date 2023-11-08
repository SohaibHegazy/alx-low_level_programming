#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - the function
 *
 * Description: perform a function on every array element
 * @array: input array
 * @size: size of input array
 * @action: action function to be performed
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
