#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node at an index
 * @head: pointer to the head of the list
 * @index: index to get point at
 *
 * Return: the node location or NULL if node doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int i = 0;

	for (i = 0; i < index; i++)
	{
		if (!node)
			return (NULL);
		node = node->next;
	}
	return (node);
}
