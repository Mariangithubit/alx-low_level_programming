#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table
 * @key: the key looking for
 * Return: value , or NULL if failure
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int k_index;
	hash_node_t *temp;

	if (ht == NULL)
		return (NULL);

	if (key == NULL || *key == '\0')
		return (NULL);

	k_index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[k_index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
