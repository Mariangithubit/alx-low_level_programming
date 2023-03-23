#include "main.h"
/**
 * 0-isupper.c - checks for uppercase character.
 * @c: refer to  uppercase
 * Return: 1 if c uppercase, 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
