#include "variadic_functions.h"
/**
 * format_char - format char
 * @separator: the string
 * @p: pointer of argument
 */
void format_char(char *separator, va_list p)
{
	printf("%s%c", separator, va_arg(p, int));
}
/**
 * format_int - format integer
 * @separator: the string
 * @p: pointer of argument
 */
void format_int(char *separator, va_list p)
{
	printf("%s%d", separator, va_arg(p, int));
}
/**
 * format_float - format float
 * @separator: the string
 * @p: pointer of argument
 */
void format_float(char *separator, va_list p)
{
	printf("%s%f", separator, va_arg(p, double));
}
/**
 * format_string - format string
 * @separator: the string
 * @p: pointer of argument
 */
void format_string(char *separator, va_list p)
{
	char *str = va_arg(p, char *);

	switch ((int)(!str))
	case 1:
		str = "(nil)";
		printf("%s%s", separator, str);
}
/**
 * print_all - prints anything
 * @format: a list of types of arguments
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	int n;
	char *separator = "";
	va_list p;
	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};
	va_start(p, format);
	while (format && format[i])
	{
		n = 0;
		while (tokens[n].token)
		{
			if (format[i] == tokens[n].token[0])
			{
				tokens[n].f(separator, p);
				separator = ", ";
			}
			n++;
		}
		i++;
	}
	printf("\n");
	va_end(p);
}
