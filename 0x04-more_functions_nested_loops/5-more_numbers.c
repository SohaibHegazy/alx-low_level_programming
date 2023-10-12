#include "main.h"

/**
 * more_numbers - entry point
 *
 * Description: write 0 - 14 10 times
 *
 * Return: void
 */

void more_numbers(void)
{
	int t = 0;
	int n;
	int u;

	while (t < 10)
	{
		n = 0;

		while (n < 15)
		{
			if (n > 9)
			{
				_putchar(1 + 48);
			}
			u = n % 10;
			_putchar(u + 48);
			n++;
		}
		_putchar('\n');
		t++
	}
}
