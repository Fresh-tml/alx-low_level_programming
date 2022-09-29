#include "main.h"

int real_prime(int n, int i);

/**
 * is_prime_number - prime identifier
 * @n: number
 * Return: 1 if n is prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_prime(n, n - 1));
}

/**
 * check_prime - check prime number
 * @n: number
 * @i: iterator
 * Return: a 1 or 0
 */

int real_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (real_prime(n, i - 1));
}
