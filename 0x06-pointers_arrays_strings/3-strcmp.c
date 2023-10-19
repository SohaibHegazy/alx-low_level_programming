#include "main.h"
#include <stdio.h>

/**
 * _strcmp - the function
 *
 * Description: compares two strings
 * @s1: input
 * @s2: input
 *
 * Return: 0 if equal, >0 if s1>s2, <0 if s1<s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1 != '\0')
	{
		i = *s1 - *s2;
		if (i == 0)
		{
			s1++;
			s2++;
		}
		else if (i != 0)
		{
			break;
		}
	}
	return (i);
}

