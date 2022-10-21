#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: the hash table to add or update the key/value to
 * @key: key to be used/value pair.
 * @value: value associated with the key.
 * Return: index for the key/value pair in the array of the hashtable
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_element, *tmp;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	if (tmp != NULL)
	{
		while (tmp)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				tmp->value = strdup(value);
				return (1);
			}
			tmp = tmp->next;
		}
	}

	new_element = malloc(sizeof(hash_node_t));
	if (new_element == NULL)
		return (0);

	new_element->key = strdup(key);
	new_element->value = strdup(value);
	new_element->next = NULL;

	if (ht->array[index] != NULL)
		new_element->next = ht->array[index];

	ht->array[index] = new_element;

	return (1);
}
