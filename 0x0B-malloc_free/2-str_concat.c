#include <stdlib.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: The first string to be concatenated.
 * @s2: The second string to be concatenated.
 *
 * Return: A pointer to a newly allocated string containing the concatenated
 *         contents of s1 and s2, or NULL on failure.
 *
 * If s1 is NULL, it is treated as an empty string.
 * If s2 is NULL, it is treated as an empty string.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	unsigned int length_s1;
	unsigned int length_s2;
	unsigned int i, j;

	length_s1 = 0;
	length_s2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[length_s1])
		length_s1++;

	while (s2[length_s2])
		length_s2++;

	concatenated = (char *)malloc((length_s1 + length_s2 + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < length_s1; i++)
		concatenated[i] = s1[i];

	for (j = 0; j < length_s2; j++)
		concatenated[i + j] = s2[j];

	concatenated[i + j] = '\0';

	return (concatenated);
}

