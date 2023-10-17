#include "main.h"
#include <stdio.h>

/**
 * puts2 - the function
 *
 * Description: writes every other character
 * @str: input
 *
 * Return: void
 */

void puts2(char *str)
{
	while (str[i] != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
