#include "main.h"
#include <stdio.h>

/**
 * *_strcat - the function
 *
 * Description: cat two strings
 * @*src: input
 * @*dest: input
 *
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int n, m;

	for (n = 0; dest[n] != '\0'; n++)
		;
	for (m = 0; src[m] != '\0'; n++, m++)
	{
		dest[n] = src[m];
	}
	Return(dest);
}
