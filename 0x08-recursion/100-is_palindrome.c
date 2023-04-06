#include "main.h"
/**
 * last_input - the last char
 * @s: the string
 * Return: 0
 */
int is_palindrome(char *s);
int check(char *s, int start, int end, int mod);
int last_input(char *s)
{
	int r = 0;

	if (*s > '\0')
		r += last_input(s + 1) + 1;
	return (r);
}
/**
 * is_palindrome - the palindrome
 * @s: the string
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	int end = last_input(s);

	return (check(s, 0, end - 1, end % 2));
}
/**
 * check - check if the string is plaindorm
 * @s: the string
 * @start: the start of string
 * @end: the end of string
 * @mod: the refrencing
 * Return: 0 or 1
 */
int check(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, mod));
}
