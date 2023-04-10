#include <stdio.h>
#include <stdlib.h>
/**
 * main - make change for an amount of money.
 * @argc: the counter
 * @argv: the value
 * return: 0
 */
int main(int argc, char *argv[])
{
	int i, k = 0, m = atoi(argv[1]);
	int c[] = {25, 10, 5, 2, 1};

	if (argc == 2)
	{
		for (i = 0; i < 5; i++)
		{
			if (m >= c[i])
			{
				k += m / c[i];
				m = m % c[i];
				if (m % c[i] == 0)
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
