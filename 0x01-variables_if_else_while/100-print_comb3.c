#include <stdio.h>

/**
 * main - entry point
 *
 * Description: C program to write digits separated with commas and space
 *
 * Return: always 0
 *
 */

int main(void)
{
	int x = 0;
	int y = 0;

	while (x < 10)
	{
		while (y < 10)
		{
			if (x != y)
			{
				putchar('0' + x);
				putchar('0' + y);
				if (x == 8 && y == 9)
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
					y++;
				}
			}
			else if (x == y)
			{
				y++;
			}
		}
		x++;
		y = x;
	}

	putchar('\n');

	return (0);
}
