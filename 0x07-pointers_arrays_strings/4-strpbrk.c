#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the first occurrence in the string
 * @accept: the founded byets
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i, f;
	char *t;

	i = 0;
	while (s[i] != '\0')
	{
		f = 0;
		while (accept[f] != '\0')
		{
			if (accept[f] == s[i])
			{
				t = &s[i];
				return (t);
			}
			f++;
		}
		i++;
	}
	return (0);
}
