#include "main.h"

/**
 * set_bit - function to set a value of a bit to 1
 *
 * @n: input int
 * @index: index of bit to change
 *
 * Return: 1 if success or -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}
