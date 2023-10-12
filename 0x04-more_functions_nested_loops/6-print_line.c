#include "main.h"
#include <stdio.h>

/**
 * print_line - entry point
 *
 * Description: draw st line
 *
 * Return: void
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	while (x <= n)
	{
		_putchar('_');
	}
	_putchar('\n');
}
