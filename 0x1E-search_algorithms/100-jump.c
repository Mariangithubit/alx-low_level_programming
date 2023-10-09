#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array
 * @size:  the number of elements in array
 * @value: the value to search for
 * Return: value in the array, OR -1 if failed
 */
int jump_search(int *array, size_t size, int value)
{
	int index, n, j, prev;

	if (array == NULL || size == 0)
		return (-1);

	n = (int)sqrt((double)size);
	j = 0;
	prev = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, index[array]);

		if (array[index] == value)
			return (index);
		j++;
		prev = index;
		index = n * j;
	} while (index < (int)size && array[index] < value);
	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}
	return (-1);
}
