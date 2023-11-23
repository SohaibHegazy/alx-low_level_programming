#include "main.h"
#include <math.h>

/**
 * binary_to_uint - function that converts binary to unsigned int
 *
 * @b: binary input as a string
 *
 * Return: converted number or 0 if no input or if string isn't only 1 and 0
 */

unsigned int binary_to_uint(const char *b)
{
	const char *ptr;
	unsigned int n = 0;
	unsigned int sum = 0;
	unsigned int num = 1;

	if (!b || (*b != 0 && *b != 1))
		return (0);

	ptr = b;

	while (*ptr)
		ptr++;
	for (n = 0; ptr != b; n++)
	{
		sum += (*ptr) * num;
		n++;
		ptr--;
		num = num * 2;
	}
	return (sum);
}
