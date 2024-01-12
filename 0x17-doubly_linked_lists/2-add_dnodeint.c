#include "lists.h"

/**
 * add_dnodeint - adds node to the beginning of a doubly linked list
 * @head: pointer to the head of the list
 * @n: number to be added in the new node
 *
 * Return: location of new node or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *current = *head;

	new_node = malloc(sizeof(dlistint_t));
	if(!new_node)
		return (NULL);

	new_node->prev = current->prev;
	new_node->next = current;
	new_node->n = n;
	current->prev = new_node;

	return (new_node);
}
