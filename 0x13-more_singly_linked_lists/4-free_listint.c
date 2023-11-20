#include "lists.h"

/**
 * free_listint - function to free memory of a list
 *
 * @head: input string
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *del, *temp;

	if (!head)
		return;

	temp = head;
	del = head;

	while (temp)
	{
		temp = temp->next;
		free(del);
		del = temp;
	}
}
