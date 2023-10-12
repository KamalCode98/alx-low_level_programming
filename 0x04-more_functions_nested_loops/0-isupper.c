#include "main.h"
/**
 * _isupper -  Entry point
 *
 * *@c : variable that takes 1 or 0
 *
 * Description: A function that checks for uppercase character
 *
 * Prototype: int _isupper(int c);
 *
 * Return: 1 if uppercase 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
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
