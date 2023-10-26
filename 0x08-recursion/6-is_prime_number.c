#include "main.h"
/**
 * is_prime_number - Checks if a number is prime
 * @n : The number to check
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, 2));
}

/**
 * is_prime - Help function to check if a number is prime
 * @n: The number to check
 * @divisor: The current divisor to check
 * Return: ! if n is prime, 0 otherwise
 *
 */
int is_prime(int n, int divisor)
{
	if (n == divisor)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (is_prime(n, divisor + 1));
}
