#include "main.h"
/**
 * _strspn - Entry point
 * * @s : This the main C string to be scanned
 * * @accept : This is the string, it contains
 * the list of characters to match str1
 * Description: Write a function,
 * that gets the length of prefix substring
 * Prototype: unsigned int _strspn(char *s, char *accept);
 * Return: s wich consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found = 1;

	while (*s && found)
	{
		char *a = accept;

		found = 0;
		while (*a)
		{
			if (*s == *a)
			{
				count++;
				found = 1;
				break;
			}
			a++;
		}
		if (found)
		{
			s++;
		}
	}

	return (count);
}
