#include <stdio.h>
#include "main.h"

/*
 * main - function to write char
 *
 * Description: C program that prints _putchar then new line
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
