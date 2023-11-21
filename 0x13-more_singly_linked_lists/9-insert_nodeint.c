#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at index
 *
 * @head: pointer
 * @idx: index of the node
 * @n: int of the node
 *
 * Return: the address of the new node or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *prev, *next;
	unsigned int i = 0;

	prev = next = *head;

	if (!head || !(*head))
		return (NULL);

	new = (listint_t *)malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	if (idx == 0)
	{
		*head  = new;
		new->next = next;
	}

	next = next->next;

	while (i < idx - 1)
	{
		if (prev)
		{
			prev = prev->next;
			next = next->next;
			i++;
		}
		else
			return (NULL);
	}
	prev->next = new;
	new->next = next;
	new->n = n;

	return (new);
}
