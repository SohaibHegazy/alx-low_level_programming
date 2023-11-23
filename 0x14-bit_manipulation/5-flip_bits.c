#include "main.h"

/**
 * flip_bits - function to count bits to flip to change a number
 *
 * @n: input int 1
 * @m: input int 2
 *
 * Return: number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int i = 0;

	while (xor)
	{
		if (xor & 1)
			i++;
		xor = xor >> 1;
	}
	return (i);
}
