#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes a node at
 * a given position
 * @head: beginning of linked list
 * @index: index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	 listint_t *before, *after;

	if (*head == NULL)
		return (-1);

	after = *head;
	before = *head;

	if (index == 0)
	{
		*head = after->next;
		free(after);
		after = NULL;
		return (1);
	}

	while (index != 0)
	{
		if ((*head)->next == NULL)
			return (-1);

		before = after;
		after = after->next;
		index--;
	}
	before->next = after->next;
	free(after);
	after = NULL;
	return (1);
}
