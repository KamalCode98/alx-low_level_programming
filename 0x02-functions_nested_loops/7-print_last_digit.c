#include "main.h"
/**
 * print_last_digit - Entry point
 *
 *  * @n: int parameter
 *
 * Write a function that prints the last digit of a number.
 *
 * Prototype: print_last_digit(int);
 *
 * Return: The program should return 0
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n > 0)
	{
		last_digit = n % 10;
	}
	else
	{
		last_digit = -(n % 10);
	}

	_putchar(last_digit + '0');

	return (last_digit);
}
