#include "lists.h"

/**
 * add_node - function to add node at the start of the list
 *
 * @head: pointer to the first node
 * @str: input string
 *
 * Return: address of newly added element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = (list_t *)malloc(strlen(str) + 1 + sizeof(int) + sizeof(int));

	if (temp == NULL)
		return (NULL);
	else
	{
		temp->str = strdup(str);
		temp->len = strlen(str);
		temp->next = *head;
		*head = temp;

		return (*head);
	}
}
