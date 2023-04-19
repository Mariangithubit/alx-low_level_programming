#include "function_pointers.h"
/**
 * print_name - print a name
 * @name: the name want to print
 * @f: the function pointer
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
