#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data (n)
 * of a listint_t linked list
 * @head: beginning of linked list
 *
 * Return: sum or 0
 */
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL || head->next == NULL)
		return (0);

	sum = 0;

	while (head->next != NULL)
	{
		head = head->next;
		sum += head->n;
	}
	return (sum);
}
