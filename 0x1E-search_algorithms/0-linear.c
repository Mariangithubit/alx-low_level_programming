#include "search_algos.h"
/**
 * linear_search -  searches for a value in an array of integers
 * @array: a pointer to the first element of the array
 * @size:  the number of elements in array
 * @value: the value to search for
 * Return: a value in the array, OR -1 if fail
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
