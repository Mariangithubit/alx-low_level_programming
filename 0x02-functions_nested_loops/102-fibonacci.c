#include "main.h"
#include <stdio.h>
/**
 * main - Fibonacci sequence
 * Description: prints the first 50 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int count;
	long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);
		fib1 = fib2;
		fib2 = sum;
		if (count == 49)
			printf("\n");
		else
		{
			printf(",");
			printf(" ");
		}
	}
	return (0);
}
