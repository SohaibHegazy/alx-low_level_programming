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

	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	new_node->n = n;
	new_node->prev = temp;
	new_node->next = NULL;

	return (new_node);
}
