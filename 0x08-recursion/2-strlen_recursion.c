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
	static int i = 1;

	if (*s == '\0')
		return (i - 1);
	i++;
	_strlen_recursion(s + 1);
}

