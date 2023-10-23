#include "main.h"
#include <stdio.h>

/**
 * *_strchr - the function
 *
 * Description: finds first occurance of charcter in a string
 * @s: the input string
 * @c: the character to be found
 *
 * Return: pointer to c or null if not found
 */

char *_strchr(char *s, char c)
{
	int i;
	char *ptr = s;

	for (i = 0; s[i] != c && s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			ptr = (s + i);
		}
		else
		{
			ptr = NULL;
		}
	}

	return (ptr);
}


