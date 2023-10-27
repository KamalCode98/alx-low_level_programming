#include <stdio.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always return 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
