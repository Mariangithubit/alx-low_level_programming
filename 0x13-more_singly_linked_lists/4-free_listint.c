#include "lists.h"
/**
 * free_listint - free lists
 * @head: head of node
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while
	{
		node = head;
		head = head->next;
		free(node);
	}
}
