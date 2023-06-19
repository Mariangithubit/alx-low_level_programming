#include "main.h"
/**
 * _strspn - the length of a prefix substring
 * @s: the initial segment
 * @accept: the second segment
 * Return: i
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, f;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (f = 0; accept[f] != s[i]; f++)
		{
			if (accept[f] == '\0')
				return (i);
		}
	}
	return (i);
}
