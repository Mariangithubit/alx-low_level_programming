#include "main.h"
/**
 * more_numbers -\ prints 10 times the numbers, from 0 to 14
 * Return: 0
 */
void more_numbers(void)
{
	int r, n, c;

	for (r = 1; r <= 10; r++)
	{
		for (c = 0; c <= 14; c++)
		{
			n = c;
			if (c > 9)
			{
				_putchar(1 + 48);
				n = c % 10;
			}
			_putchar(n + 48);
		}
		_putchar('\n');
	}
}
