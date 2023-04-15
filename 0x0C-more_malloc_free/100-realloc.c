#include "main.h"
/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated
 * @old_size: the size that allocated before
 * @new_size: the new size of the new memory block
 * Return: ptr or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *m;
	unsigned int i;

	if (ptr == NULL)
	{
		m = malloc(new_size);
		return (m);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	m = malloc(new_size);
	if (m == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
	{
		m[i] = ((char *) ptr)[i];
	}
	free(ptr);
	return (m);
}
