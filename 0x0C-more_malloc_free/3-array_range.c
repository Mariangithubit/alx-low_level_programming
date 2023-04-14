#include "main.h"
/**
 * *array_range - creates an array of integers.
 * @min: minimum num
 * @max: maximum num
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i, j;
	int *m;

	if (min > max)
		return (NULL);
	i = max - min + 1;
	m = malloc(sizeof(int) * i);
	if (m == 0)
		return (NULL);
	for (j = 0; j < i; j++)
		m[j] = min++;
	return (m);
}
