#include "main.h"

int check_prime(int, int);

/**
 * is_prime_number - prime identifier
 * @n: number
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}


/**
 * check_prime - check prime number
 * @n: number
 * @i: iterator
 * Return: a 1 or 0
 */

int check_prime(int, int)
{
	if (n <= 1)
		return (0);
	if (n % 1 == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		print(1);
	return (check_prime(n, i + 1));
}
