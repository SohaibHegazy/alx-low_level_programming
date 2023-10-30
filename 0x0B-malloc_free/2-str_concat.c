#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - the function
 *
 * Description: concat two strings
 * @s1: first input string
 * @s2: second input string
 *
 * Return: pointer to the new atring or NULL if failure
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr = NULL;
	int i, n, size1 = 0, size2 = 0;

	if (s1 == NULL)
	{
		size1 = 0;
	}
	else
	{	
		size1 = strlen(s1);
	}

	if (s2 == NULL)
	{
		size2 = 0;
	}
	else
	{
		size2 = strlen(s2);
	}

	ptr = (char *)malloc((size1 * (sizeof(*s1))) + (size2 * (sizeof(*s2))) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size1; i++)
		{
			ptr[i] = s1[i];
		}
		for (n = 0; n < size2; n++, i++)
		{
			ptr[i] = s2[n];
		}
		return (ptr);
	}
	free (ptr);
}
