#include<stdio.h>

/**
 *
 * main - entry point
 *
 * Description: a program to print without printf or puts
 *
 * Return: always 1
 *
 */

int main(void)
{
	char *s="and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	while (*s) putchar (*s++);
	return (1);
}
