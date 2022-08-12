#include "lists.h"
/**
 * add_node - Entry Point
 * @head: start of linked list.
 * @str: existing string
 * Return: 0
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *newnode;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	newnode->len = i;
	newnode->str = strdup(str);
	newnode->next = *head;

	*head = newnode;

	return (newnode);
}
