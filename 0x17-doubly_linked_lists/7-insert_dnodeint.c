#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at index in doubly linked list
 * @h: pointer to the head of the list
 * idx: index to insert node at
 * n: value to insert in the node
 *
 * Return: node address of NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = *h, *new = NULL;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; i < idx; i++)
	{
		if (!node)
			return (NULL);
		node = node->next;
	}

	if (node->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->prev = node;
	new->n = n;
	new->next = node->next;
	node->next->prev = new;
	node->next = new;

	return (new);
}
