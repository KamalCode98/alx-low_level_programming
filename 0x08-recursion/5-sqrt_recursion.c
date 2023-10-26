#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number for which to find the square root.
 * Return: The natural square root of n.
 * If n doesn't have a natural square root, return -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (find_sqrt(n, 1, n));
}

/**
 * find_sqrt - Helper function  find the natural square root.
 * @n: The number for which to find the square root.
 * @i: The current value to check as a possible square root.
 * @high: The upper bound for searching the square root.
 * Return: The natural square root of n. If not found, return -1.
 */
int find_sqrt(int n, int i, int high)
{
	if (i * i == n)
		return (i);
	if (i * i > n || i > high)
		return (-1);
	return (find_sqrt(n, i + 1, high));
}

