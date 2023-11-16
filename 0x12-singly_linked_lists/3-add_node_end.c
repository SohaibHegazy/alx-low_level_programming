#include "lists.h"

/**
 * add_node_end - function to add node at the end of a list
 *
 * @head: pointer to the pointer of first node
 * @str: input string
 *
 * Return: address of newly added element or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *new;

	new = (list_t *)malloc(strlen(str) + 1 + sizeof(int) + sizeof(int));

	if (new != NULL)
	{
		temp = *head;

		while (temp->next != 0)
			temp = temp->next;

		temp->next = new;
		new->str = strdup(str);
		new->len = strlen(str);
		new->next = 0;

		return (new);
	}
	else
		return (NULL);
}
