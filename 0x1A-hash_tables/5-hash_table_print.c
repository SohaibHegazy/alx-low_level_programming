#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 *
 * @ht: pointer to the hash table
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node;
	bool printed = false;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("(");

	while (i < ht->size)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (printed)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			printed = true;
			node = node->next;
		}
		i++;
	}
	printf(")\n");
}
