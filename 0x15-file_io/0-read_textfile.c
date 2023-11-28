#include "main.h"

/**
 * read_textfile - Reads a text file and prints it
 * to the POSIX strandart output
 *
 * @filename: Name of the file to read
 *
 * @letters: Number of letter to read and print
 *
 * Return: The actual number of letters it could read and print
 *
 * or 0 on failure.
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, read_bytes, write_bytes;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	read_bytes = read(fd, buffer, letters);
	close(fd);

	if (read_bytes == -1)
	{
		free(buffer);
		return (0);
	}

	write_bytes = write(STDOUT_FILENO, buffer, read_bytes);
	free(buffer);

	if (write_bytes == -1 || write_bytes != read_bytes)
		return (0);

	return (read_bytes);
}
