#include "main.h"
#include <stdio.h>

/**
 * *_memcpy - the function
 *
 * Description: copies n bytes from src memory area to dest
 * @src: source memory area
 * @dest: destination memory area
 * @n: number of bytes copied
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
