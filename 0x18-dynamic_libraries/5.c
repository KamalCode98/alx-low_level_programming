#include "main.h"
/**
 * _isdigit - Entry point
 *
 * *@c : Variable to stock output
 *
 * Description: Function that check for a digit
 *
 * Prototype: int _isdigit(int c);
 *
 * Return: 1 if c is a digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		c = 1;
		return (c);
	}
	else
	{
		c = 0;
		return (c);
	}
}
