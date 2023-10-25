#include "main.h"

/**
 * _print_rev_recursion - the function
 *
 * Description: prints a reverse string
 * @s: input string
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
