#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index index
 *
 * @head: pointer
 * @index: index of node to be deleted
 *
 * Return: 1 if succeed and -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *prev, *next;
	unsigned int i = 0;

	if (!(*head) || !head)
		return (-1);

	node = *head;
	next = node->next;

	if (index == 0)
	{
		free(node);
		*head = next;
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (next != NULL)
		{
			next = next->next;
			node = node->next;
		}
		else
			return (-1);
	}
	prev = node;
	node = next;
	next = next->next;
	free(node);
	prev->next = next;
	return (1);
}
