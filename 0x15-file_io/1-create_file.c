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
	int fd, write_result, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	for (len = 0; text_content[len] != '\0'; len++)
		;

	write_result = write(fd, text_content, len);
	close(fd);

	return (write_result == -1 ? -1 : 1);
}
