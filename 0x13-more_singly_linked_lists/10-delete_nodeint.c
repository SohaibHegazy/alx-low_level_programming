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

	if (!head)
		return (-1);

	node = *head;

	while (i < index - 1)
	{
		if (node != NULL)
		{
			node = node->next;
			i++;
		}
		else
			return (-1);
	}

	prev = node;
	node = node->next;

	if (node->next == NULL)
	{
		free(node);
		prev->next = NULL;
	}

	else
	{
		next = node->next;
		free(node);
		prev->next = next;
	}
	return (1);
}
