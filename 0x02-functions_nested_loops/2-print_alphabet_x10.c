#include "main.h"
/**
 * print_alphabet_x10
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i;
	int m;

	for (i = 1; i <= 10; i++)
	{
		for (m = 97; m <= 122; m++)
		{
			_putchar(m);
		}
		_putchar('\n');
	}
}
