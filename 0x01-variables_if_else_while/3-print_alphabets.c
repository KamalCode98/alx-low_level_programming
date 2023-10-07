#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char up_alp = 'A';
	char low_alp = 'a';

	while (low_alp <= 'z')
	{
		putchar(low_alp);
		++low_alp;
	}

	while (up_alp <= 'Z')
	{
		putchar(up_alp);
		++up_alp;
	}

	putchar ('\n');
	return (0);
}
