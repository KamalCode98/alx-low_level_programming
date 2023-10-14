#include "main.h"
/**
 * print_diagonal - Entry point
 * @n : Is the number of time the character \ should be printed
 * Prototype: void print_diagonal(int n)
 * Return: If n is 0 or less, the function should only print a \n
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}

}
