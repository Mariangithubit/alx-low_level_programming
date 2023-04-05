#include "main.h"
/**
 * is_prime_number - prime num
 * @n: the prime num
 * @r: not prime num
 * Return: 0
 */
int if_prime(int n, int r);
int is_prime_number(int n)
{
	return (if_prime(n, 2));
}
/**
 * is_prime_number - prime num
 * @n: the prime num
 * @r: not prime num
 * Return: 0
 */
int if_prime(int n, int r)
{
	if (r >= n && n >= 2)
	{
		return (1);
	}
	else if (n % r == 0 || n < 2)
	{
		return (0);
	}
	else
	{
		return (if_prime(n, (r + 1)));
	}
}
