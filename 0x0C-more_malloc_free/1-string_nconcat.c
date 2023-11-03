#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings with a limit.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of characters from s2 to concatenate.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1;
	unsigned int len2;
	unsigned int i, j;

	len1 = 0;
	len2 = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[len1])
		len1++;
	while (s2[len2] && len2 < n)
		len2++;
	concat = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (!concat)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (j = 0; j < len2; j++)
		concat[i + j] = s2[j];

	concat[i + j] = '\0';

	return (concat);
}

