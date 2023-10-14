#include "main.h"

/**
 * more_numbers - Entry point
 * function that prints 10 times the numbers, from 0 to 14
 * in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int num;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num <= 9)
			{
				_putchar((num % 10) + '0');
			}
			else
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
