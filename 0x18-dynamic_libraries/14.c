#include "main.h"

/**
 * _strcmp - Compare two strings
 * @s1: First string to compare
 * @s2: Second string to compare
 *
 * Compares two strings, s1 and s2, and returns:
 * - Negative value if s1 < s2
 * - Positive value if s1 > s2
 * - 0 if s1 and s2 are equal
 *
 * Prototype: int _strcmp(char *s1, char *s2);
 * Return: Integer indicating comparison result.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
