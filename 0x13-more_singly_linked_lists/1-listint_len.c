#include "lists.h"
/**
 * listint_len - the number of elements in a linked
 * @h: node
 * Return: n
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
