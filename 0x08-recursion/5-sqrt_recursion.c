#include "main.h"

int root_root(int n, int i);

/**
 * _sqrt_recursion - function that gives the square root
 * @n: number
 * Return:square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (root_root(n, 0));
}

/**
 * root_root - recursive square root
 * @n: number
 * @i: iterator
 * Return: a number
 */

int root_root(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (root_root(n, i + 1));
}
