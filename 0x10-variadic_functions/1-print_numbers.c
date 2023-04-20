#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: the string to be printed between numbers
 * @n: the number of integers
 * @...: the numbers to be printed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p, int));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(p);
}
