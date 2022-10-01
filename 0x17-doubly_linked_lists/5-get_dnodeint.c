#include "lists.h"

/**
 * get_dnodeint_at_index - Entry point
 * @head: head of the DLL to find node in.
 * @index: index of where the node should be.
 * Return: index of where the node is, or NULL if it doesn't exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int current;
	dlistint_t *node;

	node = head;
	current = 0;

	while (node)
	{
		if (current == index)
			return (node);
		if (node->next == NULL && index > current + 1)
			return (NULL);
		current++;
		node = node->next;
	}
	return (NULL);
}
