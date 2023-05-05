#include "main.h"
/**
 * flip_bits - flip to get from one number to another
 * @n: num 1
 * @m: num 2
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor)
	{
		if (xor & 1)
			count++;
		xor = xor >> 1;
	}
	return (count);
}
