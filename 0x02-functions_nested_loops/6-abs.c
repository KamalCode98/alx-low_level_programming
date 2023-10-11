#include "main.h"

/**
 * _abs - Entry point
 *
 * *@n : int parameter
 *
 * function that computes the absolute value of an integer.
 *
 * Prototype: int _abs(int);
 *
 * Return: The progrq; return 0 (Success)
 */

int _abs(int n)
{

	if (n < 0)

		return (n * -1);

	else
		return (n);
}
