#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - the function
 *
 * Description: function that prints name
 * @name: input name
 * @f: pointer to a function that takes arg of char
 * @char: argument of function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name)
}
