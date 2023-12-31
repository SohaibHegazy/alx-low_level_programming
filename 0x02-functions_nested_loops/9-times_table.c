#include "main.h"

/**
 * times_table - entry point
 *
 * Description: write times table
 *
 * Return: void
 */

void times_table(void)
{
	int a;
	int b;
	int m;

	while (a < 10)
	{
		while (b < 10)
		{
			m = a * b;
			if (m < 10 && b > 0)
			{
				_putchar(' ');
				_putchar(m + 48);
				if (b == 9)
				{
					_putchar('\n');
					b++;
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					b++;
			}
			else if (m < 10 && b == 0)
			{
				_putchar(m + 48);
				if (b == 9)
				{
					_putchar('\n');
					b++;
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					b++;
				}
			}
			else if (m >= 10)
			{
				_putchar((m / 10) + 48);
				_putchar((m % 10) + 48);
				if (b == 9)
				{
					_putchar('\n');
					b++;
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					b++;
				}
			}
		}
		a++;
		b = 0;
	}
}
