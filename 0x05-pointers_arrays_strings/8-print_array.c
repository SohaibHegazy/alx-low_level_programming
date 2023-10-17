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
	int i;
	while (i <= n)
	{
		if (i < n)
		{
			printf("%c, ", a[i]);
		}
		else if (i == n)
		{
			printf("%c\n", a[i]);
		}
		i++;
	}
}


