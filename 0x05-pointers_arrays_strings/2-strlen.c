#include "main.h"
#include <stdio.h>

/**
 * _strlen - the function
 *
 * Description: length of string
 * @s: input
 *
 * Return: always 0
 */

int _strlen(char *s)
{
	int i;
	for (i = 0; *s !== '\0'; i++)
	{
		char *p = *s + i;
	}
	return (p - s);
}
