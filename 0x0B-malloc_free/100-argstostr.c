#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - the function
 *
 * Description: concatenates all the arguments of program
 * @ac: input integer
 * @av: input char
 *
 * Return: pointer to a string or null if failure
 */

char *argstostr(int ac, char **av)
{
	int i, j, n = 0, m = 0;
	int *string = NULL;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < ac; i++, n++)
		{
			n = n + strlen(av[i]);
		}
		string = (char *)malloc((n + 1) * sizeof(*av[i]));
		if (string == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < ac; i++)
			{
				for (j = 0; av[i][j] != '\0'; j++, m++)
				{
					string[m] = av[i][j];
				}
				string[m] = '\n';
				m++
			}
			string[m] = '\0';
			return (string);
		}
	}
}
