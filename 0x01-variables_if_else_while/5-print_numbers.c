#include <stdio.h>

/**
 * main - entry point
 *
 * Description: C program to write single digits of base 10
 *
 * Return: always 0
 *
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar('%i', n);
		n++;
	}

	putchar('\n');

	return (0);
}
