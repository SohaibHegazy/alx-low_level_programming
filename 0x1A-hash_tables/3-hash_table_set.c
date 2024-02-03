#include "hash_tables.h"

/**
 * hash_table_set - function to add element to hash table
 *
 * @ht: pointer to the hash table
 * @key: the key
 * @value: value associated with the key
 *
 * Return: 1 if success or 0 if failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *node, *temp;
	char *new_value;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[i];
	for (; temp != NULL; temp = temp->next)
	{
		if (strcmp(temp->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(temp->value);
			temp->value = new_value;
			return (1);
		}
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node);
		free(node->key);
		return (0);
	}
	node->next = ht->array[i];
	ht->array[i] = node;
	return (1);
}
