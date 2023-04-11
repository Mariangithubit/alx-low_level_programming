#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup -  pointer to a newly allocated space in memory
 * @str: a string
 * Return: 0
 */
char *_strdup(char *str)
{
	int n = 0, size = 0;
	char *l;

	if (str == NULL)
		return (NULL);
	for (; str[size] != '\0'; size++)
		;
		l = malloc(size * sizeof(*str) + 1);
	if (l == 0)
	{
		return (NULL);
	}
	else
	{
		for (; n < size; n++)
			l[n] = str[n];
	}
	return (l);
}
