#include "main.h"
#include <stdio.h>

/**
 * main - the main function
 *
 * Description: writes the name of the program
 * @argc: number of arguments
 * @argv[]: array of arguments
 *
 * Return: always 0
 */

int main(int argc, const char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
