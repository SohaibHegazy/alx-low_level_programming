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
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}

	putchar('\n');

	return (0);
}
