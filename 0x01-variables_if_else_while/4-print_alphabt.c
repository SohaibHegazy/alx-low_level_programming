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

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
			ch++;
		}
		else
		{
			ch++;
		}
	}

	putchar('\n');

	return (0);
}
