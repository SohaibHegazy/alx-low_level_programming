#include "main.h"

/**
 * _strspn - the function
 *
 * Description: looks for the position where first character doesn't belong to a string
 * @s: input string
 * @accept: string of accepted characters
 *
 * Return: number of bytes of initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
			{
				return (i);
			}
		}
	}
	return (i);
}
