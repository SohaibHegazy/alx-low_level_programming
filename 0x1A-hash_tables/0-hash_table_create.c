#include "hash_tables.h"

/**
 * hash_table_create - function to create hash table
 *
 * Description: function that takes arg of array size
 * 		to create a hash table
 *
 * @size: size of array
 *
 * Return: pointer to the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;
	unsigned long int i;

	new_hash_table = malloc(sizeof(hash_table_t));
	if (!new_hash_table)
		return (NULL);

	new_hash_table->size = size;
	new_hash_table->array = malloc(sizeof(hash_table_t *) * size);
	if (!new_hash_table->array)
	{
		free(new_hash_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		new_hash_table->array[i] = NULL;

	return (new_hash_table);
}
