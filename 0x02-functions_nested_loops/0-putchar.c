#include <stdio.h>
#include "main.h"

/**
 *
 * main - entry point
 *
 * Description: program for print _putchar
 *
 * Return: always 0
 *
 */

int main(void)
{
	int n = 0;
	char a[8] = "_putchar";

	while (n < 8)
	{
		_putchar(a[n]);
		n++;
	}
	_putchar('\n');

	return (0);
}
