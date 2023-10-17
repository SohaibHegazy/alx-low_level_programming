#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - the function
 *
 * Description: Copies string to another
 * @dest: string to be copied to
 * @src: string to copy from
 *
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	if (*src != '\0')
	{
		for (i = 0; *src != 0; i++, src++, dest++)
		{
			*dest = *src;
		}
	}
	else if (*src == '\0')
	{
		src++;
		dest++;
		*dest = *src;
	}
}
