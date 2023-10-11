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
			_putchar(m + 48);
			b++;
		}
		_putchar('\n');
		a++;
		b = 0;
	}
}
