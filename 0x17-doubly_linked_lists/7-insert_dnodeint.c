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
	dlistint_t *node = h;
	unsigned int i = 0;

	for (i = 0; i < idx; i++)
	{
		if (!node)
			return (NULL);
		node = node->next;
	}

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	prev = node->prev;
	prev->next = new;
	new->prev = prev;
	new->n = n;
	new->next = node;
	node->prev = new;

	reutn (new);
}
