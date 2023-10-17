#include "main.h"
#include <stdio.h>

/**
 * print_array - the function
 *
 * Description: prints array elements separated by commas and spaces
 * @a: array input
 * @n: number of array elements
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i < n - 1)
		{
			printf("%d, ", *a);
		}
		else if (i == n - 1)
		{
			printf("%d\n", *a);
		}
		i++;
		a++;
	}
}


