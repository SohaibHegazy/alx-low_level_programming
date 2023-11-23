#include "main.h"

/**
 * clear_bit - function to clear the value of a bit
 *
 * @n: input int
 * @index: index of bit to be cleared
 *
 * Return: 1 if success or -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n &= 1L << index));
}
