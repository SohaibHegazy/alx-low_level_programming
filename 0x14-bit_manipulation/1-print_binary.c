#include "main.h"

/**
 * print_binary - print binary representation of a decimal number
 *
 * @n: input decimal number
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int size = sizeof(n) * 8, done = 0;

	while (size)
	{
		if (n & 1L << --size)
		{
			_putchar('1');
			done++;
		}
		else if (done)
			_putchar('0');
	}
	if (size == 0)
		_putchar('0');
}
