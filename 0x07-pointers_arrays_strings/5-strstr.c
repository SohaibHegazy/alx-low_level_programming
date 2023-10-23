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

	for (i = 0; haystack[i] != '\0'; i++)
	{	
		for (j = 0; needle[j] == haystack[i]; i++, j++)
		;

		if (needle[j] == '\0')
		{
			return (&haystack[i - j]);
		}
		return ('\0');
}

