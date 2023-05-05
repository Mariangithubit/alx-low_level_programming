#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0
 * @n: the given num
 * @index: the bit to 0
 * Return: 1 if it worked, or -1 if an error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);
	i = 1 << index;
	if (*n & i)
		*n ^= i;
	return (1);
}
