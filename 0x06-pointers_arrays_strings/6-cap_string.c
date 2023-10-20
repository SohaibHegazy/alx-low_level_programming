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

	for (i = 0; i < (sizeof(c) / sizeof(char)); i++)
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
	while (*s != '\0')
	{
		if (sep(*s))
		{
		s++;
		if (*s > 96 && *s < 123)
		{
			*s = *s - 32;
		}
		}
	s++;
	}
	return (s);
}
