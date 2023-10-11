#include "main.h"

/**
 *jack_bauer - Entry point
 *
 * function that prints every minute of the day; starting from 00:00 to 23:59.
 *
 * Prototype: void jack_bauer(void);
 *
 * Return: Always 0 (Success);
 */
void jack_bauer(void)
{
	int min;
	int h;

	for (h = 0; h < 24; h++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');
			_putchar('\n');
		}
	}
}
