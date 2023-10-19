#include "main.h"
#include <stdio.h>

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
	int a;
	int sep;
	int b;
	int lower;

	while (*s != '\0')
	{
		if (*s == ' ' || '\t' || '\n' || ',' || '.' || '"' || '!' || '?' || '(' || ')' || '{' || '}' || ';')
		{
			if (*s > 96 && *s < 123)
			{
				*s = *s - 32;
			}
			else
			{
				continue;
			}
		}
		else
		{
			continue;
		}
		s++;
	}
	return (s);
}
 
