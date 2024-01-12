#include "lists.h"

/**
 * print_dlistint - prints all elements of a dll
 * @h: pointer to the header of the list
 *
 * Return: number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_s *ptr, size_t i = 0;

	for (i = 0; ptr != '\0'; i++, ptr++)
	{
		printf("%d\n", ptr->n);
	}
	return (i);
}
