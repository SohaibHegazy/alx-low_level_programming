#include "lists.h"

/**
 * add_dnodeint_end - adds point to the end of a doubly linked list
 * @head: pointer to the head of the list
 * @n: data of the new node
 *
 * Return: the location of new node of NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *temp = *head;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	if (!head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new_node;
		new_node->prev = temp;
	}

	return (new_node);
}
