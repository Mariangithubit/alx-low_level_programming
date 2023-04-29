#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning
 * @head: node
 * @n: new node
 * Return: the address of the new element, NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node = malloc(sizeof(listint_t));

	if (!head || !n_node)
	{
		return (NULL);
		free(n_node);
	}
	else
	{
		n_node->n = n;
		n_node->next = *head;
		*head = n_node;
	}
	return (n_node);
}
