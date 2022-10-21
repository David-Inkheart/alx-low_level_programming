#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: Pointer to the newly created hash table or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hasht;
	unsigned long int i;

	if (size == 0)
		return (NULL);
/* allocate memory for the  hash table */
	hasht = malloc(sizeof(hash_table_t));

	if (hasht == NULL)
		return (NULL);

	hasht->size = size;
/* memory for the array in the hash table using the size */
	hasht->array = malloc(sizeof(hash_node_t) * size);

	if (hasht->array == NULL)
	{
		free(hasht);
		return (NULL);
	}

/* set each array to NULL for now since it's empty */
	i = 0;

	for (; i < size; i++)
	{
		hasht->array[i] = NULL;
	}

	return (hasht);
}

