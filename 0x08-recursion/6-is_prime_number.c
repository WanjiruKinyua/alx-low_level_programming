#include "main.h"

int is_divisible(int k, int d);
/**
 * is_divisible - Entry point
 * Description: Prime number
 * @k: Integer
 * @d: Integer
 * Return: 1 if prime number 0 otherwise
 */
int is_divisible(int k, int d)
{
	if (d == 1 || d == k)
	{
		return (0);
	}
	else if (k % d == 0)
	{
		return (1);
	}
	else
	{
		return (is_divisible(k, d - 1));
	}
}

/**
 * is_prime_number - entry point of a function
 * @n: integer
 * Return: 1 if prime number 0 on otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		return (!is_divisible(n, n - 1));
	}
}
