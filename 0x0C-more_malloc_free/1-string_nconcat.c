#include "main.h"
/**
 * *string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: number of bytes
 * Return: point to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, k, s1_len, s2_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;
	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		;
	str = malloc(s1_len + n + 1);
	if (str == NULL)
	{
		return (0);
	}
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (k = 0; k < n; k++)
	{
		str[i] = s2[k];
		i++;
	}
	str[i] = '\0';
	return (str);
}
