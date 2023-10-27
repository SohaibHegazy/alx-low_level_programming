#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main function
 *
 * Description: adds positive ineteger
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if true and 1 if Error
 */

int main(int argc, const char *argv[])
{
	int i, sum = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] < 48 || *argv[i] > 57)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum = sum + atoi(argv[i]);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
