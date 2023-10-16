#include "main.h"
#include <stdio.h>

/**
 * _puts - function
 *
 * Description: prints string
 * @str: input
 *
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		putchar(*str[i]);
	}
}
