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
	int i;

	for (i = 0; *s != '\0'; s++)
	{
		i++;
	}
	while (i >= 0)
	{
		s--;
		_putchar(*s);
		i--;
	}
	_putchar('\n');
}
