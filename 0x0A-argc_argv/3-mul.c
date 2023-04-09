#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @argc: the counter
 * @argv: the value
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	if (argc == 3)
	{
		i = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", i);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
