#include "main.h"

/**
 * _strncat - Entry point
 * @dest : destination of the string
 * @src : the source that goes to destination
 * @n : represents a maximum number of characters
 * Description: function that concatenates two strings
 * Prototype: char *_strcat(char *dest, char *src);
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
