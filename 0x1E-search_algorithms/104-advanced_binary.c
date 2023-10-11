#include "search_algos.h"
/**
 * re_search - search for a value in array
 * @array: a pointer to the first element of the array
 * @size: size of teh array
 * @value: the value to search for
 * Return: a value in the array, OR -1 if fail
 */
int re_search(int *array, size_t size, int value)
{
	size_t i;
	size_t half = size / 2;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");
	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);
	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
	{
		if (half > 0)
			return (re_search(array, half + 1, value));
		return ((int)half);
	}

	if (value < array[half])
		return (re_search(array, half + 1, value));
	half++;
	return (re_search(array + half, size - half, value) + half);
}


/**
 * advanced_binary - searches for a value in sorted array of integers
 * @array: a pointer to the first element of the array
 * @size:  the number of elements in array
 * @value: the value to search for
 * Return: a value in the array, OR -1 if fail
 */
int advanced_binary(int *array, size_t size, int value)
{
	int i = re_search(array, size, value);

	if (i >= 0 && array[i] != value)
		return (-1);

	return (i);
}
