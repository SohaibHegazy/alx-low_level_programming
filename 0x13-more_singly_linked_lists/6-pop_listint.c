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
	int n = 0;

	if (!head || !(*head))
		return (0);

	del = *head;
	temp = *head;

	n = (*head)->n;

	temp = temp->next;
	free(del);
	*head = temp;

	if (!head)
		return (0);
	else
		return (n);
}
