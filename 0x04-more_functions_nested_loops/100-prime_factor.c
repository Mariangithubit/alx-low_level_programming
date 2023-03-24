#include <stdio.h>
#include <math.h>
/**
 * main - inds and prints the largest prime factor of the number
 * Return: 0
 */
int main(void)
{
	long x, y;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
		if (number % x ==0)
		{
			y = number / x;
		}
	}
	printf("%ld\n", y);
	return (0);
}
