#include "main.h"
/**
 * rev_string - reverses a string
 * @s: length of string
 * Return: 0
 */
void rev_string(char *s)
{
	int l = 0;
	int i = 0;
	char temp;

	while (s[i++])
		l++;
	for (i = l - 1; i >= l / 2; i--)
	{
		temp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = temp;
	}
}
