#include "main.h"

/**
 * print_sign - Entry point
 *
 *  * @n: int parameter
 *
 * Description: Write a function that prints the sign of number
 *
 * Prototype: int print_sign(int n);
 * Returns 1 if n is greater than zero
 * Returns 0 if n is zero
 * Returns -1 if n is less than zero
 *
 * Return: The program should return 0
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
