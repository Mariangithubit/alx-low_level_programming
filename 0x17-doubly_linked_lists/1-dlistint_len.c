#include "lists.h"

/**
 * dlistint_len - number of elements in a linked dlistint_t list.
 * @h: pointer to the head
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (i);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
