#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers.
 * @argc: the counter
 * @argv: the value
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n = 0;
	char *j;

	while (argc--)
	{
		for (j = argv[argc]; *j; j++)
			if (*j < 48 || *j > 57)
				printf("Error\n");
		return (1);
		n += atoi(argv[argc]);
	}
	printf("%d\n", n);
	return (0);
}	
