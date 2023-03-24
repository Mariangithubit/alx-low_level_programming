#include "main.h"
/**
 * print_line -\draws a straight line in the terminal.
 * @n: the number of times the character
 * Return: 0
 */
void print_line(int n)
{
	int L;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (L = 0; L < n; L++)
		{
			_putchar(95);
		}
			_putchar('\n');
	}
}
