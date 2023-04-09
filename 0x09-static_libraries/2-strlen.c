#include "main.h"
/**
 * _strlen - the length of a string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	for (i = 0; *s != '\0'; s++)
		i++;
	return (i);
}
