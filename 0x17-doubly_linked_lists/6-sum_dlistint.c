#include "lists.h"

/**
 * sum_dlistint - sums the list elements
 * @head: pointer to the head of the list
 *
 * Return: sum or 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
