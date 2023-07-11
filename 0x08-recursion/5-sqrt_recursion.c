#include "main.h"
int naive_sqrt_func(int n, int k);
/**
 * _sqrt_recursion - computes square root of an natural number
 * @n: non negative integer to be computed
 * Return: sqaure root
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	else
		return (naive_sqrt_func(n, 1));
}

/**
 * naive_sqrt_func - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @k: iterator
 *
 * Return: the resulting square root
 */
int naive_sqrt_func(int n, int k)
{
	if (k * k > n)
		return (-1);
	if (k * k == n)
		return (k);
	return (naive_sqrt_func(n, k + 1));
}

