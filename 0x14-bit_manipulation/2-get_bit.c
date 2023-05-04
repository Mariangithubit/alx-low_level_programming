#include "main.h"
/**
 * get_bit - the value of a bit at a given index.
 * @n: the num
 * @index: the given index
 * Return: the value of the bit at index or -1 if an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index > 63)
		return (-1);
	i = (n >> index) & 1;
	return (i);
}
