#include "lists.h"

/**
 * print_dlistint - prints all elements of a dll
 * @h: pointer to the header of the list
 *
 * Return: number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
