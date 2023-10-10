#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * function that prints 10 times the alphabet
 * in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int count;
	char alpha;

	for (count = 0; count < 10; count++)
	{
		alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
	}
}
