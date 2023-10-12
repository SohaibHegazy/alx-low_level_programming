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
	int n;

	scanf("%d", n);
	while (n--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
