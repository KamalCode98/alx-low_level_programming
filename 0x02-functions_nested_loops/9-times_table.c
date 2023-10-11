#include "main.h"

/**
 * times_table - Entry point
 *
 * function that prints the 9 times table, starting with 0.
 *
 * Prototype: void times_table(void);
 *
 * Return: Always 0 (Success);
 */
void times_table(void)
{
	int row, col, product;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			product = row * col;
			if (col == 0)
			{
				_putchar('0');
			}
			else
			{
				if (product < 10)
				{
					_putchar(' ');
				}
				else
				{
					_putchar((product / 10) + '0');
				}
				_putchar((product % 10) + '0');
			}
			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
