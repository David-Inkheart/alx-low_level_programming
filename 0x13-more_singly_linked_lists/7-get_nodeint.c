#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: beginning of linked list
 * @index: index of the list where the node is
 *
 * Return: Address of the nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = head;

	if (index == 0)
	{
		return (head);
	}
	if (temp == NULL || temp->next == NULL)
		return (NULL);

	while (index != 0)
	{
		temp = temp->next;
		index--;
	}
	return (temp);
}
