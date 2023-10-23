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
	int i, sum1 = 0, sum2 = 0, j = size -1;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i][i];
	}
	printf("%d", sum1);
	for ( ; j >= 0; j--)
	{
		sum2 = sum2 + a[j][j];
	}
	printf("%d", sum2);
}
