#include "lists.h"
/**
 * add_node_end - adds a new node at the end
 * @head: node
 * @str: string
 * Return:  the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node = malloc(sizeof(list_t));
	list_t *node = *head;
	int len = 0;

	if (!head || !n_node)
	{
		return (NULL);
		free(n_node);
	}
	while (str[len])
	{
		len++;
		n_node->len = len;
		n_node->str = strdup(str);
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = n_node;
	}
	else
		*head = n_node;
	return (n_node);
}
