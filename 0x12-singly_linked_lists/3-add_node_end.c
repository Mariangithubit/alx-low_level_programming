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

	if (!head || !n_node)
	{
		return (NULL);
		free(n_node);
	}
	if (str)
	{
		n_node->str = strdup(str);
	        n_node->len = strlen(n_node->str);	
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
