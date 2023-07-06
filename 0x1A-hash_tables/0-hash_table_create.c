#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table.
 * @size: the size of the array
 * Return: the newly created hash table, or NULL If function wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	hash_node_t **array;
	unsigned long int i;

	if (table == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = NULL;

	table->array = array;
	table->size = size;
	return (table);
}
