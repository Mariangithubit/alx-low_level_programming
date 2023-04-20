#include "variadic_functions.h"
/**
 * sum_them_all -  the sum of all parameters
 * @n: the number of arguments
 * @...: the numbers
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list p;

	if (n == 0)
		return (0);
	va_start(p, n);
	for (i = 0; i < n; i++)
		sum += va_arg(p, int);
	va_end(p);
	return (sum);
}
