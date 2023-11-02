#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * strtow - the function
 *
 * Description: splits a string into words separated by spaces
 * @str: string to be separated
 *
 * Return: pointer to the array of strings
 */

char **strtow(char *str)
{
	int i = 0;
	char **s = NULL;

	while (str[i] != '\0')
	{
		for (j = 0; str[i] != " "; j++)
		{
			i++;
		}
		size[n] = j + 1;
		n++;
	}

	if (str == NULL || str == "")
	{
		return (NULL);
	}
	else
	{
		for (i = 0; *str != '\0'; i++)
		{
			
		}
		return (s)
