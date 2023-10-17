#include "main.h"
#include <stdio.h>

/**
 * rev_string - the function
 *
 * Description: reverse a string
 * @s: input
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	char *t = &*s;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}
	while (i - 1 > 0)
	{
		*s = t[i - 1];
		s++;
		i--;
	}

}
