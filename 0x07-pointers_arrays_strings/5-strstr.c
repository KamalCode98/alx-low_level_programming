#include "main.h"
/**
 * _strstr - Entry point
 * * @haystack : string to be scaneed
 * * @needle : small string to be searched in haystack
 * Description : function that finds occurence of substing
 * needle in the string haystack.
 * Prototype: *_strstr(char *haystack, char needle)
 * Return: pointer to the first occurence in haystack
 * of any of the entire sequence of charqcters
 * or a NULL pointer
 */
char *_strstr(char *haystack, char *needle)
{
	while (haystack)
	{
		if (*haystack == *needle)
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}

