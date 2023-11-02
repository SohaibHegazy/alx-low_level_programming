#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - the function
 *
 * Description: concats two strings till n of the second one
 * @s1: first iput string
 * @s2: second input string
 * @n: number of characters to be concated from the second string
 *
 * Return: concated string or null if failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int count = 0;
	int i = 0, m = 0;
	int l1, l2;
	char *ptr;

	l1 = strlen(s1);
	l2 = strlen(s2);

	if (l2 <= n)
	{
		count = l1 + l2 + 1;
	}
	else
	{
		count = l1 + n + 1;
	}

	ptr = malloc(sizeof(char) * count);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < l1; i++)
		{
			ptr[i] = s1[i];
		}
		for (m = 0; i < count - 1; i++, m++)
		{
			ptr[i] = s2[m];
		}
		ptr[i] = '\0';
		return (ptr);
	}
}
