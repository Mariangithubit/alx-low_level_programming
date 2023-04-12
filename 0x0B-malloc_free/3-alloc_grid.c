#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height og the grid
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int **s, n, i;
	s = malloc(sizeof(*s) * height);

	if (width <= 0 || height <= 0 || s == 0)
	{
		return (NULL);
	}
	else
	{
		for (n = 0; n < height; n++)
		{
			s[n] = malloc(sizeof(**s) * width);
			if (s[n] == 0)
			{
				while (n--)
					free(s[n]);
				free(s);
				return (NULL);
			}
			for (i = 0; i < width; i++)
				s[n][i] = 0;
		}
	}
	return (s);
}
