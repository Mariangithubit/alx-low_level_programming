#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes
 * @argc: the numbers of the arg
 * @argv: the size of the arg
 * Return: 0
 */
int main(int argc, char **argv)
{
	char *p = (char *)main;
	int i, b;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < b; i++)
	{
		if (i == b - 1)
		{
			printf("%02hhx", p[i]);
		}
	}
	return (0);
}
