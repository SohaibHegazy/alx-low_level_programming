#include "lists.h"

/**
 * free_listint2 - function to free list and set head to null
 *
 * @head: input string
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *del, *temp;

	if (!head)
		return (NULL);

	del = *head;
	temp = *head;

	while (temp)
	{
		temp = temp->next;
		free(del);
		del = temp;
	}

	*head = NULL;
}
