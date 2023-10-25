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
	static unsigned int i = 1;

	if (*s == '\0')
	{
		return (i);
	}
	i++;
	_strlen_recursion(s + 1);
}

