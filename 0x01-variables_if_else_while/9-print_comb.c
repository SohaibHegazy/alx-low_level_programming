#include <stdio.h>

/**
 * main - entry point
 *
 * Description: C program to write single digits of base 10 separated with commas and space
 *
 * Return: always 0
 *
 */

int main(void)
{
	int n = 0;

	while (n < 9)
	{
		putchar('0' + n);
		putchar(',');
		putchar(' ');
		n++;
	}

	putchar('9');

	return (0);
}
