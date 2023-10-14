#include "main.h"

/**
 * more_numbers - Entry point
 * function that prints 10 times the numbers, from 0 to 14
 * in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int count = 0;

	while (count < 10)
	{
		int number = 0;

		while (number <= 14)
		{
			if (number >= 10)
				_putchar((number / 10) + '0');

			_putchar((number % 10) + '0');
			number++;
		}

		count++;
		_putchar('\n');
	}
}
