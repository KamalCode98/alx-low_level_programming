#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of charts
 * and initializes it with a specific char.
 * @c: size of the array
 * @size : size of the array
 * Description: allocates memory for an array of
 * characters of the specified size
 * initializes the array with a given character,
 * and returns a pointer to the array
 * It checks for allocation failure or a size of 0
 * and handles these cases appropriately
 *
 * Return: pointer to the array initialized or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while (size--)
		n[size] = c;

	return (n);
}
