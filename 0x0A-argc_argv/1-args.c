#include "stdio.h"
/**
 * main - prints the number of arguments passed into it.
 * @argc: the count
 * @argv: the value
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)*argv[0];
	printf("%d\n", argc - 1);
	return (0);
}
