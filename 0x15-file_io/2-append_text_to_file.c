#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 *
 * @filename: Name of the file to append to
 *
 * @text_content: Content to add to the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, fd;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	i = 0;

	while (text_content[i] != '\0')
	{
		i++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	write(fd, text_content, i);

	return (1);
}
