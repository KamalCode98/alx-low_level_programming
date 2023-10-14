#include "main.h"
/**
 * print_line - Entry point
 *
 * @n: is the number of times the character _ should be print
 *
 * Prototype: void print_line(int n)
 *
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
}
