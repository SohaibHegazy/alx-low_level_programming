#include "main.h"

/**
 * print_square - entry point
 *
 * Description: draw square
 * @size: length of square side
 *
 * Return: void
 */

void print_square(int size)
{
	int x = 0;
	int y = 0;

	while (y < size)
	{
		while (x < size)
		{
			_putchar('#');
			x++;
		}
		_putchar('\n');
		y++;
	}
	_putchar('\n');
}
