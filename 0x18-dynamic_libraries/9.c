#include "main.h"
/**
 * _strlen - Entry point
 *
 * @s : variable that stores the string length
 * Description: Write a function that returns the length of a string.
 * Prototype: int _strlen(char *s);
 * Return: Always 0
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
