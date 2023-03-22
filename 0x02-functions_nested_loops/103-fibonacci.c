#include "main.h"
#include <stdio.h>
/**
 * main - the Fibonacci sequence
 * description: adding the previous two terms
 * Return: 0
 */
int main(void)
{
	long fib1 = 0, fib2 = 1, sum;
	float total-sum;

	while (1)
	{
		sum = fib1 + fib2;
		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			total-sum += sum;
		fib1 = fib2;
		fib2 = sum;
	}
	printf("%.0f\n", total-sum);
	return (0);
}
