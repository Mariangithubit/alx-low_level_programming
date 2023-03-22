#include "main.h"
/**
 * print_last_digit
 * @n: prints the last digit of a number
 * Return: 0
 */
int print_last_digit(int n)
{
	int L;

	L = n % 10;
	if (L < 0)
	{
		_putchar(-L + 48);
		return (-L);
	}
	else
	{
		_putchar(L + 48);
		return (L);
	}
}
