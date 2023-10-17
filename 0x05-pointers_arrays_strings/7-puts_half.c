#include "main.h"
#include <stdio.h>

/**
 * puts_half - the function
 *
 * Description: writes the second half of a string
 * @str: input
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, l;
	int n = 0;

	for (i = 0; *str != '\0'; i++)
		l = i - 1;
	while (n <= l)
	{
		if (n < l / 2)
		{
			n++;
		}
		else
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}

