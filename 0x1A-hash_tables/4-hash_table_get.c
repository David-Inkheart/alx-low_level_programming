#include "hash_tables.h"

/**
 * hash_table_get - gets the value for the given key
 * @ht: hash table to search
 * @key: key to lookup
 * Return: value stored at the key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *bucket;

	if (ht == NULL || ht->size == 0)
		return (NULL);
	i = key_index((unsigned char *)key, ht->size);
	bucket = ht->array[i];
	for (bucket = ht->array[i]; bucket != NULL; bucket = bucket->next)
	{
		if (strcmp(bucket->key, key) == 0)
			return (bucket->value);
	}
	return (NULL);
}
