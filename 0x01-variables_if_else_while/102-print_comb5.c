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
	int a = 0;
	int b = 0;

	while (a < 100)
	{
		while (b < 100)
		{
		if (a == b)
		{
			b++;
		}
		else
		{
			putchar('0' + a / 10);
			putchar('0' + a % 10);
			putchar(' ');
			putchar('0' + b / 10);
			putchar('0' + b % 10);
			if (a == 98 && b == 99)
			{
				putchar('\n');
				b++;
			}
			else
			{
				putchar(',');
				putchar(' ');
				b++;
			}
		}
		}
		a++;
		b = a;
	}
	}

	return (0);
}
