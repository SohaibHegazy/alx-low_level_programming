#include "main.h"

/**
 * _puts_rev_recursion - the function
 *
 * Description: prints a reverse string
 * @s: input string
 *
 * Return: void
 */

void _puts_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_puts_recursion(s + 1);
	_putchar(*s);
}
