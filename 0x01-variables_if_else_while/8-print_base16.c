#include <stdio.h>

/**
 * main - entry point
 *
 * Description: C program to write single digits of base 16
 *
 * Return: always 0
 *
 */

int main(void)
{
	int n = 0;
	char ch = 'A';

	while (n < 10)
	{
		putchar('0' + n);
		n++;
	}

	while (ch <= 'F')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);
}
