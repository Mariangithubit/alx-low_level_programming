#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @s: the bytes of the memory
 * @b: the constant bytes
 * @n: the first byte
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
