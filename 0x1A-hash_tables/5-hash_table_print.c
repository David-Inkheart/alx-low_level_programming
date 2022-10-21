#include "hash_tables.h"

/**
 * hash_table_print - Print a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i = 0;
	int toggle = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node != NULL)
		{
			if (toggle == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			while ((node = node->next) != NULL)
			{
				printf(", ");
				printf("'%s': '%s'", node->key, node->value);
			}

			toggle = 1;
		}
	}

	printf("}\n");
}
