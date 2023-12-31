#include "main.h"
#include <stdio.h>

/**
 * *_strncat - the function
 *
 * Description: cat two strings like strncat
 * @src: input
 * @dest: input
 * @n: input
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; b < n && src[b] != '\0'; a++, b++)
	{
		dest[a] = src[b];
	}
	return (dest);
}
