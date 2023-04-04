#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the first occurrence in the string
 * @accept: the founded byets
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int f = 0;
	char *t;

	while (s[i] != '\0')
		i++;
	{
		while (accept[f] != '\0')
			f++;
		{
			if (accept[f] == s[i])
			{
				t = &s[i];
				return (t);
			}
		}
	}
	return (0);
}
