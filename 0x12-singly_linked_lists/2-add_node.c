#include "lists.h"
/**
 * add_node - add new node
 * @head - the node
 * @str - string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n_head = malloc(sizeof(list_t));
	int len = 0;

	if (!head || !n_head)
	{
		return (NULL);
		free(n_head);
	}
	while (str[len])
		len++;
	n_head->len = len;
	n_head->str = strdup(str);
	n_head->next = *head;
	*head = n_head;
	return (n_head);
}
