#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index in a doubly linked list
 * @head: pointer to the head of the list
 * @index: index to delete node at
 *
 * Return: 1 if success or -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *prev = NULL, *next = NULL;
	unsigned int i = 0;

	for (i = 0; i < index; i++)
	{
		if (!current)
			return (-1);
		current = current->next;
	}

	prev = current->prev;
	next = current->next;
	prev->next = next;
	next->prev = prev;
	free(current);

	return (1);
}
