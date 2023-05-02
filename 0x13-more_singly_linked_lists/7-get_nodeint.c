#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node
 * @head: the node
 * @index: the index of the node
 * Return: node of NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int n = 0;

	if (!node)
		return (NULL);
	while (node && n < index)
	{
		node = node->next;
		n++;
	}
	return (node);
}
