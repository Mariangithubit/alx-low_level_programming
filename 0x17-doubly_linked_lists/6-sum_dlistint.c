#include "lists.h"

/**
 * sum_dlistint - sum of all the data
 * @head: head of the node
 * Return: the sum of n
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
