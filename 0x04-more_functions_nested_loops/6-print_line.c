#include "main.h"
#include <stdio.h>

/**
 * print_line - entry point
 *
 * Description: draw st line
 * @n: input
 *
 * Return: void
 */

void print_line(int n)
{
	int x = 1;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (x <= n)
		{
			_putchar('_');
			x++;
		}
		_putchar('\n');
	}
}
