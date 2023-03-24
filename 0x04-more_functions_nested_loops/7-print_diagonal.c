#include "main.h"
/**
 * print_diagonal -\ draws a diagonal line on the terminal.
 * @n: the number of times the character \ should be printed
 * Return: 0
 */
void print_diagonal(int n)
{
	int postn, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (postn = 0; postn < n; postn++)
		{
			for (space = 0; space < postn; space++)
			{
				_putchar(3);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
