#include "main.h"
/**
 * _memset - Entry point
 *
 * * @s : Pointer to the memory area to fill the constant byte b
 * * @b : Constant byte that fill the memory area
 * * @n : Specices the number of bytes to fil with b
 *
 * Prototype : char *_memset(char *s, char b, unsignet int n);
 * Description : Function that fills memory with a constant byte.
 * Return : S
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return s;
}
