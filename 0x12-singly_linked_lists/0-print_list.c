#include "lists.h"

/**
 * print_list - the function to print the data of a list
 *
 * @h: pointer to the input string
 *
 * Return: number of nodes or [0] (nil) if NULL
 */

size_t print_list(const list_t *h)
{
	list_t n = 0;

	while (h)
	{
		if (h -> str != NULL)
		{
			printf("[%d] %s\n", h -> len, str);
			h = h -> next;
			n++;
		}
		else
		{
			printf("[0] (nil)");
			h = h -> next;
			n++;
		}
	}
	return (n);
}
