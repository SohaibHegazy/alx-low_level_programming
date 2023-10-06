#include <stdio.h>

/**
 * main - entry point
 *
 * Description: C program to write digits separated with commas and space
 *
 * Return: always 0
 *
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar('0' + n);
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
		else if (n = 9)
		{
			putchar(' ');
		}
		n++;
	}

	return (0);
}
