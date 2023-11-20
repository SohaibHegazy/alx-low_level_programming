#include "lists.h"

/**
 * add_nodeint_end - adds node at end of list
 *
 * @head: input string
 * @n: int
 *
 * Return: address to new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = (listint_t *)malloc(sizeof(listint_t));
	temp = *head;

	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
		*head = new;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (new);
}

