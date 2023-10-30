#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strdup - the function
 *
 * Description: duplicates the input string
 * @str: input string
 *
 * Return: pointer to the dup string or NULL if no string or no memory
 */

char *_strdup(char *str)
{
	int size;
	char *ptr;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		size = strlen(str) * 2;
		ptr = (char*)malloc(size * sizeof(char) + 1);
		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; *str != '\0'; i++)
			{
				ptr[i] = str[i];
			}
			return (ptr);
		}
	}
}
