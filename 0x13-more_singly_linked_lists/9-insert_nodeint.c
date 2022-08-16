#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node at
 * a given position
 * @head: beginning of linked list
 * @idx: index of the list where the new node should be
 * @n: data of the node to be inserted
 *
 * Return: Address of the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	temp = *head;

	if (idx == 0)
	{
		newnode->next = temp;
		*head = newnode;
		return (newnode);
	}
	if (temp == NULL || temp->next == NULL)
		return (NULL);

	idx--;
	while (idx != 0)
	{
		temp = temp->next;
		idx--;
	}
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}
