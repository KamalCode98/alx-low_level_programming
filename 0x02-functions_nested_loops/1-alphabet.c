#include "main.h"
/**
 * print_alphabet - Entry point
 * Write a function that prints the alphabet
 * in lowercase, followed by a new line
 * Prototype: void print_alphabet(void)
 * You can only use _putchar twice in your code
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}

	_putchar('\n');
}

