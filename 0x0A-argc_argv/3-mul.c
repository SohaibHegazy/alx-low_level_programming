#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main function
 *
 * Description: returns the multiplication of two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if true and 1 if error
 */

int main(int argc, const char *argv[])
{
	int mul = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
}
