#include "main.h"
#include <stdio.h>

/**
 * reverse_array - the function
 *
 * Description: reverse a string
 * @a: input
 * @n: input
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int t[n];

	for (i = 0; i < n; i++)
	{
		t[i] = a[i];
	}

	while (n--)
	{
		*a = t[n];
		a++;
	}
}
