#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;
	char let = 'a';

	while (num <= 9)
	{
		putchar((num % 10) + '0');
		num++;
	}

	while (let <= 'f')
	{
		putchar(let);
		let++;
	}

	putchar('\n');
	return (0);
}
