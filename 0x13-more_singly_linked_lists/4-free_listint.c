#include "lists.h"
/**
 * free_listint - frees a listint_t list.
 * @head: pointer to beginning of linked list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
		free_listint(head->next);

	free(head);
}

