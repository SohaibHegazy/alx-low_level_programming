include "main.h"

/**
 * print_last_digit - entry point
 *
 * Description: prints last digit
 *
 * Return: always 0
 */

int print_last_digit(int n)
{
	int i;
	if (n < 0)
	{
		i = (-1) * (n % 10);
	}
	else
	{
		i = n % 10;
	}
	_putchar(i)
	return (i);
}
