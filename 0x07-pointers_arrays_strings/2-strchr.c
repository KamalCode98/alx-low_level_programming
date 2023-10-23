#include "main.h"
/**
 * _strchr - Entry point
 * * @s : This is the C string to be scanned
 * * @c : This is the character to be searched in the str
 * Description : Function that locates a character in a string
 * Prototype : char *_strchr(char *s, char c);
 * Return: char c in the string s or null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);

	return (NULL);

}
