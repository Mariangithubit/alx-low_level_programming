#include "main.h"
#include <stdio.h>
/**
 * print_number - prints an integer
 * @n: an integer
 * Return: 0
 */
void print_number(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
		_putchar(45);
		n = -1;
	}
	if (k / 10)
	{
		print_number(k / 10);
	}
		_putchar(k % 10 + '0');
}
