#include "main.h"

/**
 * _strpbrk - the function
 *
 * Description: finds first occurance of matching between strings
 * @s: input string
 * @accept: the compared string
 *
 * Return: pointer to the position
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}

