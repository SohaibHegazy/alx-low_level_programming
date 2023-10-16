#include "main.h"
#include <stdio.h>

/**
 * swap_int - the function
 *
 * Description: swaps two numbers
 * @a: input
 * @b: input
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	a = *b;
	b = *c;
}
