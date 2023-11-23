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
	int size = sizeof(n) * 8, done = 0;

	while (size)
	{
		if (n & 1L << --size)
		{
			putchar('1');
			done++;
		}
		else if (done)
			putchar('0');
	}
	if (!size)
		putchar('0');
}
