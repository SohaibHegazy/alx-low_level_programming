#include "main.h"

/**
 * _strstr - the function
 *
 * Description: finds the occurance of substring in a string
 * @haystack: the string
 * @needle: the substring
 *
 * Return: position of occurance or null if no occurance
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *h = haystack;

	for (i = 0; *h != '\0'; i++, h++)
	{
		for (j = 0; needle[j] == haystack[i]; i++, j++)
		{
		if (needle[j] == '\0')
		{
			return (h);
		}
		}
		i = i - j;
	}
	return ('\0');
}

