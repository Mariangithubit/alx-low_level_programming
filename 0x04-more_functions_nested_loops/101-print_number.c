#include "main.h"
#include <stdio.h>
/**
 * print_number - prints an integer
 * @n: an integer
 * Return: 0
 */
void print_number(int n)

{
	insigned int K = n;

	if (n < 0)
	{
		n *= -1;
		k = n;
		_putchar('-');
	}
	k /= 10;
	if (k != 0)
	{
		print_number(k);
		_putchar((unsigned int) n % 10 + '0');
	}
}
