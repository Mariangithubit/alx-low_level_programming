#include "main.h"
/**
 * *malloc_checked - allocates memory using malloc.
 * @b: integer
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *i = malloc(b);

	if (i == 0)
		exit(98);
	return (i);
}
