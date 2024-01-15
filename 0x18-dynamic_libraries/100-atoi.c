#include "main.h"

/**
 * _atoi -  convert a string to an integer
 * @s : takes input
 * Prototype: int _atoi(char *s);
 * Return: If no valid input 0, If valid input integer number.
 */
int _atoi(char *s)
{
	unsigned int res;
	int i;
	int sign;
	int digit_seen;

	digit_seen = 0;
	sign = 1;
	res = 0;
	i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit_seen = 1;
			res = (res * 10) + (s[i] - '0');
		}
		else if (digit_seen)
		{
			break;
		}
	}
	return (res * sign);
}
