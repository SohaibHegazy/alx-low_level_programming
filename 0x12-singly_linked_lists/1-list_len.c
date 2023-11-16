#include "lists.h"

/**
 * list_len - function to count number of elements in linked list
 *
 * @h: pointer to input
 *
 * Return: size_t
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;
	const list_t *temp;

	temp = h;

	while (temp)
	{
		n++;
		temp = temp->next;
	}
	return (n);
}
