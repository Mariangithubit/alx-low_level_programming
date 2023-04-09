#include "main.h"
/**
 *_strncat - concatenates a specific number from the source strings.
 * @dest: the destination string
 * @src: the source string
 * @n: number of character should be appended
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
