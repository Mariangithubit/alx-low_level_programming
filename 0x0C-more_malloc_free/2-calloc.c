#include "main.h"
/**
 * *_memset - memory set
 * @a: pointer to array byets
 * @r: an array
 * @n: byets to use
 * Return: a
 */
char *_memset(char *a, char r, unsigned int n)
{
	char *ptr = a;

	while (n--)
		*a++ = r;
	return (ptr);
}
/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: an array
 * @size: bytes
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(sizeof(int) * nmemb);
	if (p == 0)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
	{
		_memset(p, 0, sizeof(int) * nmemb);
	}
	return (p);
}
