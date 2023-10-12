#include "main.h"

/**
 * print_numbers - entry point
 *
 * Description: prints 0-9
 *
 * Return: void
 */

void print_numbers(void)
{
	int n = 0;
	while (n < 10)
	{
		_putchar(n + 48);
		_putchar('\n');
		n++;
	}
}
