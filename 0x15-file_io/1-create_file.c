#include "main.h"

/**
 * create_file - creates a files with the specified content
 *
 * @filename: Name of the file to create
 *
 * @test_content: Content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *test_content)
{
	int i, fd;

	if (filename == NULL)
		return (-1);

	if (test_content == NULL)
		test_content = "";

	i = 0;

	while (test_content[i] != '\0')
	{
		i++;
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	write(fd, test_content, i);

	return (1);
}
