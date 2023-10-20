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
	char *str = s;

	while (*s != '\0')
	{
		if ((*s - 65 > 13 && *s - 65 < 26) || (*s - 97 > 13 && *s - 97 < 26))
		{
			*s = *s - 13;
		}
		else if ((*s - 65 > 13) || (*s - 97 > 13))
		{
			*s = *s + 13;
		}
		s++;
	}
	return (str);
}
