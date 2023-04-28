#include "lists.h"
/**
 * print_list - prints all the elements 
 * @h -the node
 *Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
		if (!h)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d]%s\n", h->len, h->str);
			h = h->next;
			n++;
		}
	return (n);
}
