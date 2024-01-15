#include "main.h"

/**
 * _strpbrk - Entry point
 * * @s : string to be scanned
 * * @accept : string containing the characters to match
 *
 * Description : Function that searches a string
 * for any of a set of bytes
 *
 * Prototype: char *_strpbrk(char *s, char *accept);
 * Return: pointer to the byte in s that matche accept or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *tmp = accept;

		while (*tmp)
		{
			if (*s == *tmp)
			{
				return (s);
			}
			tmp++;
		}
		s++;
	}
	return (NULL);
}
