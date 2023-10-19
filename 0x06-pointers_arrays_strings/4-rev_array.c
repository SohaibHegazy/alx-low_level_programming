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
	char *t = &*a;

	while (n--)
	{
		*a = t[n];
		a++;
	}
}
