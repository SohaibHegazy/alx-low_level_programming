#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: prints alphabet 10 times
 *
 * Return: no return
 */

void print_alphabet_x10(void)
{
	int n = 0;

	while (n < 10)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		n++;
	}
}
