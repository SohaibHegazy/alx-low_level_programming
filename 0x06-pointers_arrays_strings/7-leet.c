#include "main.h"
#include <stdio.h>

/**
 * *leet - the function
 *
 * Description: replaces some characters in the input string with numbers
 * @s: input string
 *
 * Return: string
 */

char *leet(char *s)
{
	int i;
	char c[] = {'a', 'e', 'o', 't', 'l'};
	int d[] = {4, 3, 0, 7, 1};
	char *str = s;

	while (*s != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == c[i] || *s == (c[i] - 32))
			{
			*s = d[i] + 48;
			}
		}
		s++;
	}
	return (str);
}
