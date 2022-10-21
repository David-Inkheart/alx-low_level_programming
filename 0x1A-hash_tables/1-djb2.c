#include "hash_tables.h"
/**
 * hash_djb2 - hash function implementing the djb2 algorithm
 * @str: key to be used
 *
 * Return: stored value pair for key
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
	hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	/* hash << 5 = hash * 2^5 */
	}
	return (hash);
}
