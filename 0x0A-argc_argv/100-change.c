#include <stdio.h>
#include <stdlib.h>
/**
 * main - make change for an amount of money.
 * @argc: the counter
 * @argv: the value
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, k = 0, m = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (m >= cents[i])
			{
				k += m / cents[i];
				m = m % cents[i];
				if (m % cents[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", k);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
