#include "main.h"
/**
 * _strcpy - copy the string
 * @dest: the buffer pointed from
 * @src: the string pointed to
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
		return (dest);
}
