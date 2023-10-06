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
	int c = 0;
	int d = 0;

	while (a < 10)
	{
		while (b < 10)
		{
			while (c < 10)
			{
				while (d < 10)
				{
				if (a == c && b == d)
				{
					d++;
				}
				else
				{
					putchar('0' + a);
					putchar('0' + b);
					putchar(' ');
					putchar('0' + c);
					putchar('0' + d);
					if (a == 9 && b == 8 && c == 9 && d == 9)
					{
						putchar('\n');
						d++;
					}
					else
					{
						putchar(',');
						putchar(' ');
						d++;
					}
				}
				}
				c++;
				d = 0;
			}
			b++;
			c = 0;
			d = b;
		}
		a++;
		b = 0;
		c = a;
		d = 0;
	}

	return (0);
}
