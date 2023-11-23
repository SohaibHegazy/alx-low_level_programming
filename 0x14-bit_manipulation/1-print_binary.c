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
			printf("1");
			done++;
		}
		else if (done)
			printf("0");
	}
	if (size == 0)
		printf("0");
}
