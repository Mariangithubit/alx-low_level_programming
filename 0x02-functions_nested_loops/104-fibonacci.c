#include "main.h"
#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers
 * Description: prints the first 98 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int count, initial0s;
	unsigned long f1 = 1, f2 = 2, sum;
	unsigned long mx = 100000000, f1o = 0, f2o = 0, sumo = 0;

	for (count = 1; count <= 98; count++)
	{
		if (f1o > 0)
			printf("%lu", f1o);
		initial0s = mx - 1 - f1;
		while (f1o > 0 && initial0s > 0)
		{
			printf("%d", 0);
			initial0s--;
		}
		printf("%lu", f1);
		sum = (f1 + f2) % mx;
		sumo = f1o + f2o + (f1 + f2) / mx;
		f1 = f2;
		f1o = f2o;
		f2 = sum;
		f2o = sumo;
		if (count != 98)
			printf(",");
		else
			printf("\n");
	}
	return (0);
}
