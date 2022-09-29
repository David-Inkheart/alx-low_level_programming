#include "lists.h"

/**
 * dlistint_len - Find the number of nodes in a doubly linked list
 * @h: head pointer to Linked List
 * Return: number of nodes in Linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
