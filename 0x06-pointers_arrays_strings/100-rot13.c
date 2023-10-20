#include "main.h"
#include <stdio.h>

/**
 * *rot13 - the function
 *
 * Description: use ROT13 encryption
 * @s: input string
 *
 * Return: string
 */

char *rot13(char *s)
{
	int i;
	char *str = s;
	char r[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*s != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*s == r[i])
			{
				*s = rot[i];
			}
		}
		s++;
	}
	return (str);
}
