#include "lists.h"

/**
 * listint_len - function to count list elements
 *
 * @h: input string
 *
 * Return: count of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
