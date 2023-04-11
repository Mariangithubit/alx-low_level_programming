#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - creates an array of chars, 
 * and initializes it with a specific char
 * @size: the size of the memory to print
 * @c: the address of memory to print
 * Return: pointer to the array, or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *i = malloc(size);

	if (size == 0 || i == 0)
		return (NULL);
	while (size--)
		i[size] = c;
	return (i);
}
