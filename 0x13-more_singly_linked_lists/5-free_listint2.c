#include "lists.h"
/**
 * free_listint2 - free lists
 * @head: the node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (!head)
		return;
	while (*head)
	{
		node = *head->next;
		free(*head);
		*head = node;
	}
	*head = NULL;
}
