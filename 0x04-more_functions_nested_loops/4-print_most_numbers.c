#include "main.h"

/**
 * print_most_numbers - entry point
 *
 * Description: prints 0-9 except 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		if (n == 2 || n == 4)
		{
			n++;
		}
		else
		{
			_putchar(n + 48);
			n++;
		}
	}
	_putchar('\n');
}
