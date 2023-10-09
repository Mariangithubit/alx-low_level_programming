#include "search_algos.h"
/**
 * binary_search_recursive - searche for a value recursively
 * @array: a pointer to the first element of the array
 * @left: the start index of array
 * @right: the ending index of the array
 * @value: the value to search for
 * Return: a value in the array, OR -1 if fail
 */
int binary_search_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value)
		return (i);
	if (array[i] > value)
		return (binary_search_recursive(array, left, i - 1, value));
	return (binary_search_recursive(array, i + 1, right, value));
}


/**
 * binary_search - searches for a value in an array of integers
 * using the binary search algorithm
 * @array: a pointer to the first element of the array
 * @size:  the number of elements in array
 * @value: the value to search for
 * Return: a value in the array, OR -1 if fail
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (binary_search_recursive(array, 0, size - 1, value));
}
