#include <stdio.h>

/**
 * main - main function
 * 
 * Description: prints number of arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0
 */

int main(int argc, const char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
