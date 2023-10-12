#include "main.h"

/**
 * print_diagonal - entry point
 *
 * Description: draw diagonal
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int s = 0;
	int n;

	while (n--)
	{
		while (s--)
		{
			_putchar(' ');
		}
		s++;
		_putchar('\');
		_putchar('\n');
	}
	_putchar('\n');
}
