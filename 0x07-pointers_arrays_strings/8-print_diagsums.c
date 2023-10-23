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
		sum1 = sum1 + a[i];
		sum2 = sum2 + a[size -1 -i];
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
