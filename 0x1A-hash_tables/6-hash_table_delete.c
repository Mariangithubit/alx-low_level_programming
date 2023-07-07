#include "hash_tables.h"

/**
 * hash_table_delete - delet hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *k;
	hash_node_t *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		k = ht->array[i];
		while ((temp = k) != NULL)
		{
			k = k->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
