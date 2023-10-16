#include "main.h"
#include <stdio.h>

/**
 * print_rev - the function
 *
 * Description: print reverse string
 * @s: input
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	while (i >= 0)
	{
		i--;
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
