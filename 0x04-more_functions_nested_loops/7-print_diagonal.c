#include "main.h"

/**
 * print_diagonal - entry point
 *
 * Description: draw diagonal
 * @n: input
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int s = 0;
	int x = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (x < n)
		{
			int c = 0;

			while (c < s)
			{
				_putchar(' ');
				c++;
			}
			s++;
			x++;
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
