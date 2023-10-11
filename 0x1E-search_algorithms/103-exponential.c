#include "search_algos.h"
/**
 * binary_search_ - searche for a value using binary search
 * @array: a pointer to the first element of the array
 * @left: the start index of array
 * @right: the ending index of the array
 * @value: the value to search for
 * Return: a value in the array, OR -1 if fail
 */
int binary_search_(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}
	return (-1);
}


/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * using the binary search algorithm
 * @array: a pointer to the first element of the array
 * @size:  the number of elements in array
 * @value: the value to search for
 * Return: a value in the array, OR -1 if fail
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);

	return (binary_search_(array, i / 2, right, value));
}
