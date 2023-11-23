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

	if (!b)
		return (0);

	ptr = b;

	while (*ptr != '\0')
		ptr++;
	for (n = 0; ptr != b; n++)
	{
		ptr--;
		if (*ptr != '0' && *ptr != '1')
			return (0);
		sum += (*ptr - 48) * num;
		n++;
		num = num * 2;
	}
	return (sum);
}
