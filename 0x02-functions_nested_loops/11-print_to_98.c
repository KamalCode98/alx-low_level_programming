#include <stdio.h>

/**
 * print_to_98 - Entry point
 *
 * *@n : Variable that counts
 *
 * Description: Function that prints numbers from n to 98
 *
 * Prototype: void print_to_98(int n)
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d, ", n);
			n++;
		}
	}

	else
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	printf("98\n");
}
