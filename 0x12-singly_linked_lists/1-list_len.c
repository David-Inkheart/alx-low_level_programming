#include "lists.h"
/**
 * list_len - prints all the elements of a list_t list
 *
 *@h: pointer to start of linked list (Head)
 *
 * Return: - the number of nodes
 */
size_t list_len(const list_t *h)
{
	int nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			return (0);
		}
		else
		{
			h = h->next;
			nodes++;
		}
	}

	return (nodes);
}
