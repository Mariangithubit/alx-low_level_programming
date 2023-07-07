#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	char *p;
	hash_node_t *temp;
	unsigned long int i;

	if (ht == NULL)
		return;

	printf("{");
	p = "";
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			printf("%s'%s': '%s'", p, temp->key, temp->value);
			p = ", ";
			temp = temp->next;
		}
	}
	printf("}\n");
}
