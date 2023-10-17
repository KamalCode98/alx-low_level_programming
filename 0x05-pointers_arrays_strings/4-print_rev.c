#include "main.h"

/**
 * print_rev - Entry point
 * @s: the input string
 * Description: function that prints a string,
 * in reverse, followed by a new line.
 * Prototype: void print_rev(char *s);
 * Return: reversed string
 */
void print_rev(char *s)
{
	int length = 0;
	int i = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
