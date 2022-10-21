#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: Pointer to the newly created hash table or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hasht = NULL;
	unsigned long int i = 0;

	if (size <= 0)
		return (NULL);
/* allocate memory for the new hash table */
	hasht = malloc(sizeof(hash_table_t));

	if (hasht == NULL)
		return (NULL);

/* memory for the array in the hash table using the size */
	hasht->array = malloc(sizeof(hash_node_t) * size);

	if (hasht->array == NULL)
	{
		free(hasht);
		hasht = NULL;
		return (NULL);
	}

/* set each array to NULL for now since it's empty */
	for (; i < size; i++)
	{
		hasht->array[i] = NULL;
	}
	hasht->size = size;
	return (hasht);
}

