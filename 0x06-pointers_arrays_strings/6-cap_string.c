#include "main.h"
#include <stdio.h>

/**
 * sep - the function
 *
 * Descritpion: detects the existance of separators
 * @ch: input character
 *
 * Return: 0 if false and 1 if true
 */

int sep(char ch)
{
	int i;
	char c[] = " \t\n,;.!?\"(){}";

	for (i = 0; i < 13; i++)
		if (ch == c[i])
			return (1);
	return (0);
}

/**
 * *cap_string - the function
 *
 * Description: Capitalize all words of a string
 * @s: input
 *
 * Return: char
 */

char *cap_string(char *s)
{
	char *str = s;
	int separator = 0;

	while (*s != '\0')
	{
		if (sep(*s))
		{
		separator = 1;
		}
		else if (*s > 96 && *s < 123 && separator == 1)
		{
			*s = *s - 32;
			separator = 0;
		}
		else
		{
			separator = 0;
		}
	s++;
	}
	return (str);
}
