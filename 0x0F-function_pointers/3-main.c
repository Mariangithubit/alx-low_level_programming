#include "3-calc.h"
/**
 * main - the main function
 * @argc: the source of argument
 * @argv: the vector of argument
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)(argc);
	int a, b;
	char *p;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	p = (argv[2]);
	if (p[1] != '\0' || get_op_fun(p) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(p)(a, b));
	return (0);
}
