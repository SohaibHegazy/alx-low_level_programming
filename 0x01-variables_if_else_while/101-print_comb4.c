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
	int z = 0;

	while (x < 10)
	{
		while (y < 10)
		{
			while (z < 10)
			{
			if (x == y || y == z || x == z)
			{
				z++
			}
			else
			{
				putchar('0' + x);
				putchar('0' + y);
				putchar('0' + z);
				if (x == 7 && y == 8 && z == 9)
				{
					putchar('\n');
					z++;
				}
				else
				{
					putchar(',');
					putchar(' ');
					z++;
				}
			}
			}
			y++;
			z = y;
		}
		x++;
		y = x;
	}

	return (0);
}
