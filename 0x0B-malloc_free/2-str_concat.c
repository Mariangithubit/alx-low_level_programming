#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _len - the lenght of string
 * @s: the string
 * Return: int
 */
int _len(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
		return (size);
}
/**
 * *str_concat - concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *j;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	size1 = _len(s1);
	size2 = _len(s2);
	j = malloc((size1 + size2) * sizeof(char) + 1);
	if (j == 0)
		return (0);
	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			j[i] = s1[i];
		else
			j[i] = s2[i - size1];
	}
	j[i] = '\0';
	return (j);
}
