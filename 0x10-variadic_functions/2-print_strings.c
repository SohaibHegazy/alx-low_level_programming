#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function prints strings followed by new line
 *
 * @separator: the separator between strings
 * @n: number of strings to be printed
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int s;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
