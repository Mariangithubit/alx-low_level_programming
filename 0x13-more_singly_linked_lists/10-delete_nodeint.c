#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: node
 * @index: the index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *curr_node;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);

	}
	node = *head;
	while (node)
	{
		if (i == index)
		{
			curr_node->next = node->next;
			free(node);
			return (1);
		}
		i++;
		curr_node = node;
		node = node->next;
	}
	return (-1);
}
