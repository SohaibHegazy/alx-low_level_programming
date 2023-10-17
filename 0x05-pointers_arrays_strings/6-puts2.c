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
	int i;

	for (i = 0; str[i] != '\0'; i = i + 2)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
