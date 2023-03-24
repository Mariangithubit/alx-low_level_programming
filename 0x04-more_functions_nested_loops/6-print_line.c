#include "main.h"
/**
 * print_line -\draws a straight line in the terminal.
 * @n: the number of times the character
 */
void print_line(int n)
{
	int L;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (L = 1; L <= n; L++)
			_putchar('_');
		_putchar('\n');
	}
}
