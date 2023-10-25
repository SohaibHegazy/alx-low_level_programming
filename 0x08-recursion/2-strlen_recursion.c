#include "main.h"

/**
 * _strlen_recursion - the function
 *
 * Description: gets the length of a string
 * @s: input string
 *
 * Return: int
 */

int _strlen_recursion(char *s)
{
	unsigned int i = 0;

	if (*s != '\0')
	{
		i = i + 1 + _strlen_recursion(s + 1);
	}
	return (i);
}

