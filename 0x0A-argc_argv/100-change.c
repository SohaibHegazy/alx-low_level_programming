#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * 
 * Description: get the least amount of coins in change
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if true and 1 if Error
 */

int main(int argc, const char *argv[])
{
	if (argc == 2)
	{
		if (*argv[1] < 48)
		{
			printf("0\n");
			return (0);
		}
		else
		{
			int i, cents = atoi(argv[1]), change = 0;
			int coin[5] = {25, 10, 5, 2 ,1};

			for (i = 0; i < 5; i++)
			{
				if (cents >= coin[i])
				{
					change = change + (cents / coin[i]);
					if (cents % coin[i] == 0)
					{
						break;
					}
					cents = cents % coin[i];
				}
			}
			printf("%d\n", change);
			return (0);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
