#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * format_c - function when the format is char
 *
 * @sep: the separator between variables
 * @args: the va list arguments
 *
 * Return: void
 */

void format_c(char *sep, va_list args)
{
	printf("%s%c", sep, va_arg(args, int));
}

/**
 * format_i - function when the format is integer
 *
 * @sep: the separator between variables
 * @args: the va list arguments
 *
 * Return: void
 */

void format_i(char *sep, va_list args)
{
	printf("%s%d", sep, va_arg(args, int));
}

/**
 * format_f - function when the format is float
 *
 * @sep: the separator between variables
 * @args: the va list arguments
 *
 * Return: void
 */

void format_f(char *sep, va_list args)
{
	printf("%s%f", sep, va_arg(args, double));
}

/**
 * format_s - function when the format is string
 *
 * @sep: the separator between variables
 * @args: the va list arguments
 *
 * Return: void
 */

void format_s(char *sep, va_list args)
{
	char *ptr = va_arg(args, char *);

	if (!ptr)
		ptr = "(nil)";
	printf("%s%s", sep, ptr);
}

/**
 * print_all - function that prints all kinds of variables
 *
 * @format: chosen format
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char *sep = "";

	type t[] = {
		{"c", format_c},
		{"i", format_i},
		{"f", format_f},
		{"s", format_s}
	};

	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (t[j].c)
		{
			if (format[i] == t[j].c)
			{
				t[j].f(sep, args);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
}
