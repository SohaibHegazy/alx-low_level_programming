#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * @argc: number of arguments
 * @argv: argument value
 *
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int (*calc)(int, int), a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	calc = get_op_func(argv[2]);
	if (!calc)
	{
		printf("Error\n");
		exit(99);
	}
	if (b == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("error\n");
		exit(100);
	}

	printf("%d\n", calc(a,b));
	return (0);
}

