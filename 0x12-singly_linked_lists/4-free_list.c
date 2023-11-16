#include "lists.h"

/**
 * free_list - function to delete a list
 *
 * @head: pointer to the pointer of first node
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp, *del;

	if (head)
	{
		temp = head;
		del = head;

		while (temp != NULL)
		{
			temp = temp->next;
			head = temp;
			free(del->str);
			free(del);
			del = temp;
		}
	}
	else
		return;
}
