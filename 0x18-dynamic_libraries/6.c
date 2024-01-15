#include "main.h"
/**
 * _memcpy - Entry point
 * * @src : A pointer to the source memory
 * * @dest : A pointer to the destination memory
 * * @n : Number of bytes to be copied
 * Description: Function that copies memory area
 * Prototype: char *_memcpy(char *dest, char *src, unsigned int n);
 * Return: returns a pointer to dest
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *csrc = (char *)src;
	char *cdest = (char *)dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		cdest[i] = csrc[i];
	}

	return (dest);
}
