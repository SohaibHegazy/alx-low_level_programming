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
	int n;
	char *t;

	for (i = 0; *s != '\0'; i++)
	{
		*t[i] = *s[i];
	}
	for (n = 0; i >= 0; n++)
	{
		*s[n] = *t[i];
		i--;
	}
}
