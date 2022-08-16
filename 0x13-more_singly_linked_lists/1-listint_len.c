#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: head of the linked list
 *
 * Return: number  of nodes
 */
size_t listint_len(const listint_t *h)
{
	int nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
