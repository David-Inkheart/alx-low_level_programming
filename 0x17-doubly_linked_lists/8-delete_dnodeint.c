#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at given index
 * @head: head of list to delete node from.
 * @index: index to delete node at.
 * Return: 1 if node was successfully delete, -1 if function failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *delete;
	unsigned int i;

	temp = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		delete = *head;
		*head = (*head)->next;
		free(delete);
		return (1);
	}
	for (i = 0; temp != NULL; i++)
	{
		if (i + 1 == index)
			break;
		*temp = *temp->next;
	}
	delete = temp;
	if (i + 1 == index)
	{
		delete = temp->next;
		temp->next = temp->next->next;
		free(delete);
	}
	return (1);
}
