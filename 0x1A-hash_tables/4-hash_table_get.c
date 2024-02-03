#include "hash_tables.h"

/**
 * hash_table_get - function that gets value associated with a key
 *
 * @ht: pointer to the hash table
 * @key: the key
 *
 * Return: the value, or NULL if key is not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *temp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
			key == NULL || strlen(key) == 0)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[i];

	for (; temp != NULL; temp = temp->next)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
	}

	return (NULL);
