#include "lists.h"

/**
 * sum_dlistint - returns sum of all data in DLL
 * @head: first node of the linked list to count
 * Return: sum of all data, or 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (!head)
		return (0);
	while (head->next)
	{
		sum = head->n + sum;
		head = head->next;
	}
	return (sum += head->n);
}
