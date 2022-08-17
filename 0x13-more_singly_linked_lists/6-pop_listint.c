#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n)
 * if the linked list is empty return 0
 * @head: pointer to the beginning of the linked list.
 *
 * Return: head node's data or 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (*head == NULL)
	{
		return (0);
	}


	temp = *head;
	num = (*head)->n;
	*head = (*head)->next;

	free(temp);
/*	temp = NULL; */

	return (num);
}
