#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key
 * @key: key to be used/value pair
 * @size: size of the array
 * Return: index for the key/value pair in the array of the hashtable
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* index of key always has to be 0 <= key_index <= size */
	return (hash_djb2(key) % size);
}
