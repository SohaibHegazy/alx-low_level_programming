#include "main.h"
#include <stdio.h>

/**
 * *_memset - the function
 *
 * Description: Set fixed number of bytes to a constant
 * @s: memory area
 * @b: the constant input
 * @n: the number of bytes to be set
 *
 * Return: Pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;
	int *ptr = s;

	for (i = 0; i <= n; i++)
	{
		s[i] = b;
	}
	return (ptr);
}
