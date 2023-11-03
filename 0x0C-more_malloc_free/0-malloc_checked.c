#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The amount of memory to allocate.
 *
 * Return: A pointer to the allocated memory.
 * If malloc fails, the function terminates the program with status 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}