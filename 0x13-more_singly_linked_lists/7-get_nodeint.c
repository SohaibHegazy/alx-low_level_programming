#include "lists.h"

/**
 * get_nodeint_at_index - get index of nth node
 *
 * @head: pointer
 * @index: node to be returned
 *
 * Return: address of nth node or NULL if doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;

	if (!head)
		return (NULL);

	temp = head;

	while (i < index)
	{
		if (temp)
		{
			temp = temp->next;
			i++;
		}
		else
			return (NULL);
	}
	return (temp);
}
