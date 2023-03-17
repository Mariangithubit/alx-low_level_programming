#include <stdio.h>
/**
 * main -  prints all possible different combinations of three digits
 * Return: 0
 */
int main(void)
{
	int n;
	int m;
	int l;

for (n = 0; n <= 9; n++)
{
	for (m = 1; m <= 9; m++)
	{
		for (l = 2; l <= 9; l++)
		{
			if (n < m && m < l)
			{
				putchar(n + '0');
				putchar(m + '0');
				putchar(l + '0');
				if (n + m + l != 24)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}
putchar('\n');
return (0);
}
