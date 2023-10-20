#include "main.h"

/**
 * leet - Entry pont
 *
 * * @str: pointer that encodes into1337
 *
 * Description: Function that encode a strong into 1337
 *
 * Return: str
 *
 */

char *leet(char *str)
{
	int i = 0;
	int j;
	char letters[] = "aeotl";
	char replace[] = "43071";

	while (str[i] != '\0')
	{
		j = 0;

		while (letters[j] != '\0')
		{
			if (str[i] == letters[j] || str[i] == letters[j] - 32)
			{
				str[i] = replace[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
