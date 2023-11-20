#include "lists.h"

/**
 * add_nodeint - function to add element at the start of a list
 *
 * @head: input string
 * @n: int
 *
 * Return: address of new node or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = (listint_t *)malloc(sizeof(listint_t));

	if (!new || !head)
		return (NULL);


	new->n = n;
	new->next = NULL;

	if (*head)
		new->next = *head;
	*head = new;

	return (new);
}
