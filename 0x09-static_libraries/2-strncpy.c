#include "main.h"

/**
 * _strncpy - Function that copies a string
 * @dest: The destination buffer where the string will be copied.
 * @src: The source string to be copied.
 * @n: The maximum number of characters to copy from src to dest.
 *
 * Description: This function copies a string from src to dest, but it
 * will copy at most 'n' characters. If the length of src is less than 'n',
 * it will copy the entire src string and then pad with null characters.
 *
 * Prototype: char *_strncpy(char *dest, const char *src, int n);
 *
 * Return: A pointer to the destination string 'dest'.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	if (dest == NULL || src == NULL || n == 0)
	{
		return (dest);
	}
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
