#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the square root of  num
 * @r: the num
 * Return: 0
 */
int square(int n, int r);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * square - the square root
 * @n: the square root of num
 * @r: the num
 * Return: 0
 */
int square(int n, int r)
{
	if (r * r == n)
	{
		return (r);
	}
	else if (r * r < n)
	{
		return (square(n, (r + 1)));
	}
	else
	{
		return (-1);
	}
}
