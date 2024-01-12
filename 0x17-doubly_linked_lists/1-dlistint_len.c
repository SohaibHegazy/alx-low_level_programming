#include "lists.h"

/**
 * dlistint_len - finds the length of a doubly linked list
 * @h: pointer to the list header
 *
 * Return: length of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
