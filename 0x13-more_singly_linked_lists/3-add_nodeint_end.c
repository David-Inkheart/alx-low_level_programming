#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the beginning of a listint_t list.
 * @head: pointer to the beginning of the linked list
 * @n: new integer to be added
 *
 * Return: pointer to the new element or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	 listint_t *endnode;
	 listint_t *temp;

	if (head == NULL)
	{
		return (NULL);
	}

	endnode = malloc(sizeof(listint_t));
	if (endnode == NULL)
	{
		return (NULL);
	}

	 endnode->n = n;
	 endnode->next = NULL;

	if (*head == NULL)
	{
		*head = endnode;
		return (endnode);
	}

	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = endnode;

	return (endnode);
}
