#include  "lists.h"

/**
 * reverse_listint - reverse a list
 *
 * @head: pointer
 *
 * Return: pointer to new head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (!head)
		return (NULL);

	prev = 0;
	next = *head;

	while (next)
	{
		next = next->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return ((*head));
}
