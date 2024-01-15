#include "main.h"

/**
 * _puts - Entry point
 * @str: The intput string to be printed.
 * Description: function that prints a string,
 * followed by a new line, to stdout.
 * Prototype: void _puts(char *str)
 * Return: 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
