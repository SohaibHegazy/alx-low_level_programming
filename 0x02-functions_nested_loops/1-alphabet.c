#include "main.h"

/**
 * main- Entry point
 *
 * Description: prints alphabet
 *
 * Return: Always 0
 *
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');

}
