#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter on array
 * @array: the array
 * @size: the size of array
 * @action: pointer to a function
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
