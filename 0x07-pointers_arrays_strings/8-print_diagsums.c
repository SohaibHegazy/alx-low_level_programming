#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - the function
 *
 * Description: prints the sum of diagonal of square matrix
 * @a: the input matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, sum = 0;

	for (i = 0; i < size; i++)
	{
		sum = sum + a[i][i];
	}
	printf("%d", sum);
}
