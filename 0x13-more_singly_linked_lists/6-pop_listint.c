#include "lists.h"

/**
 * pop_listint - function to delete head node of a list
 *
 * @head: pointer
 *
 * Return: data of deleted node (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *del, *temp;
	int m = 0;

	if (!head)
		return (0);

	del = *head;
	temp = *head;

	m = (*head)->n;

	temp = temp->next;
	free(del);
	*head = temp;

	if (!head)
		return (0);
	else
		return (m);
}
