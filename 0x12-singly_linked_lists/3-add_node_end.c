#include "lists.h"
/**
 * add_node_end - Entry Point
 * @head: start of linked list.
 * @str: existing string
 * Return: 0
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *endnode;
	list_t *temp;

	if (head == NULL)
		return (NULL);

	endnode = malloc(sizeof(list_t));
	if (endnode == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	endnode->len = i;
	endnode->str = strdup(str);
	endnode->next = NULL;

	if (*head == NULL)
	{
		*head = endnode;
		return (endnode);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = endnode;

	return (endnode);
}
