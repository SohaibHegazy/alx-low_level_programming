#include "main.h"
#include <stdio.h>

/**
 * *_strcat - the function
 *
 * Description: cat two strings
 * @*src: input
 * @*dest: input
 *
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		_putchar(dest[i]);
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		_putchar(src[i]);
	}
	_putchar('\0');
	Return(0);
}
