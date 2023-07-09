#include "hash_tables.h"

/**
 * shash_table_create - creates a shash table.
 * @size: the size of the array
 * Return: the newly created hash table, or NULL If function wrong
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table = malloc(sizeof(shash_table_t));
	shash_node_t **array;
	unsigned long int i;

	if (table == NULL)
		return (NULL);

	array = malloc(sizeof(shash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = NULL;

	table->array = array;
	table->size = size;
	table->shead = NULL;
	table->stail = NULL;

	return (table);
}

/**
 * add_n_shash - add a node at the beginning of sht
 * @h: head of the linked list
 * @key: key of shash
 * @value: value of shash
 * Return: new node
 */
shash_node_t *add_n_shash(shash_node_t **h, const char *key, const char *value)
{
	shash_node_t *temp;

	temp = *h;

	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (temp);
		}
		temp = temp->next;
	}
	temp = malloc(sizeof(shash_node_t));
	if (temp == NULL)
		return (NULL);

	temp->key = strdup(key);
	temp->value = strdup(value);
	temp->next = *h;
	*h = temp;

	return (temp);
}

/**
 * add_i_shash - add new node at ht
 * @ht: hash table
 * @new: new node
 * Return: void
 */
void add_i_shash(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *temp1, *temp2;
	int k;

	temp1 = temp2 = ht->shead;

	while (temp1 != NULL)
	{
		k = strcmp(new->key, temp1->key);
		if (k == 0)
		{
			return;
		}
		else if (k < 0)
		{
			new->sprev = temp1->sprev;

			if (temp1->sprev)
				temp1->sprev->snext = new;
			else
				ht->shead = new;

			temp1->sprev = new;
			new->snext = temp1;

			return;
		}
		temp2 = temp1;
		temp1 = temp1->snext;
	}

	new->sprev = temp2;
	new->snext = NULL;

	if (ht->shead)
		temp2->snext = new;
	else
		ht->shead = new;

	ht->stail = new;
}

 /**
 * shash_table_set - dds new hash to the hash table.
 * @ht: the hash tableto be add
 * @key: the new key.
 * @value: the value of the key.
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_shash;
	unsigned long int index;

	if (!ht)
		return (0);
	if (key == NULL || *key == '\0')
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	new_shash = add_n_shash(&(ht->array[index]), key, value);

	if (new_shash == NULL)
		return (0);

	add_i_shash(ht, new_shash);
	return (1);
}

/**
 * shash_table_get - retrieve a value of the key
 * @ht: hash table
 * @key: key for value
 * Return: value
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *temp;
	unsigned long int index;

	if (ht == NULL)
		return (NULL);

	if (key == NULL || *key == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}

/**
 * shash_table_print - print shash
 * @ht: hash table
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	char *p;
	shash_node_t *temp;

	if (ht == NULL)
		return;

	printf("{");
	p = "";
	temp = ht->shead;

	while (temp != NULL)
	{
		printf("%s'%s': '%s'", p, temp->key, temp->value);
		p = ", ";
		temp = temp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print the key and value
 * @ht: hash table
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	char *p;
	shash_node_t *temp;

	if (ht == NULL)
		return;

	printf("{");
	p = "";
	temp = ht->stail;

	while (temp != NULL)
	{
		printf("%s'%s': '%s'", p, temp->key, temp->value);
		p = ", ";
		temp = temp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - delet hash table
 * @ht: hash table
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *temp1;
	shash_node_t *temp2;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		temp1 = ht->array[i];
		while ((temp2 = temp1) != NULL)
		{
			temp1 = temp1->next;
			free(temp2->key);
			free(temp2->value);
			free(temp2);
		}
	}
	free(ht->array);
	free(ht);
}
