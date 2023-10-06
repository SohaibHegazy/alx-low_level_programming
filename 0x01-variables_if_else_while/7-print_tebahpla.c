#include <stdio.h>

/**
 * main - entry point
 *
 * Description: C program to write alphabet using putchar
 *
 * Return: always 0
 *
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}

	putchar('\n');

	return (0);
}
