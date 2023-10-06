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
	while (ch <= 'z');
	{
		putchar(ch);
		ch++;
	}

	return (0);
}
