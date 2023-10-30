#include <stdio.h>
#include <stdlib.h>
/**
 * is_positive_integer - Check if string contains only positive digits 0 - 9
 * @str: The string to check.
 * Description: This function checks if the input string contains only
 * positive digits (0-9), returning 1 for a positive integer, or 0 if not.
 *
 * Return: 1 if a positive integer, 0 otherwise.
 */
int is_positive_integer(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
	}
	return (1);
}
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: Adds positive numbers and handles errors when:
 * 1. No arguments, printing 0.
 * 2. An argument contains non-digit symbols, resulting in an "Error" message.
 *
 * Return: 0 for success, 1 for error
 */

int main(int argc, char *argv[])
{
	int sum;
	int i;

	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (is_positive_integer(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
