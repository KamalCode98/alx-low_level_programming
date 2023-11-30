#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * print_error_and_exit - Print error message and exit program
 *
 * @code: The exit error code
 * @message: the error message format
 * @filename: the filename related to the error
 *
 * Description: Function that prints an error
 * message to the standard error stream and exits
 * the program with a specified exit code.
 **/
void print_error_and_exit(int code, const char *message, const char *filename)
{
	dprintf(STDERR_FILENO, message, filename);
	exit(code);
}

/**
 * main - Copy the content of one file to another
 *
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Description: This function copies the content of
 * a source file to a destination file.
 *
 * Return: 0 in success
 **/
int main(int argc, char *argv[])
{
	const char *source_file, *destination_file;
	int source_fd, dest_fd;

	char buffer[BUFFER_SIZE];
	ssize_t bytes_read = BUFFER_SIZE, bytes_written;

	if (argc != 3)
		print_error_and_exit(97, "%s\n", "Usage: cp file_from file_to");

	source_file = argv[1], destination_file = argv[2];
	source_fd = open(source_file, O_RDONLY);

	if (source_fd == -1)
		print_error_and_exit(98, "Error: Can't read from file %s\n", source_file);

	dest_fd = open(destination_file, O_CREAT | O_WRONLY | O_TRUNC |
			 O_APPEND, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (dest_fd == -1)
		print_error_and_exit(99, "Error: Can't write to %s\n", destination_file);

	while (bytes_read == BUFFER_SIZE)
	{
		bytes_read = read(source_fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			print_error_and_exit(98, "Error: Can't read from file %s\n", source_file);

		bytes_written = write(dest_fd, buffer, bytes_read);
		if (bytes_written == -1)
			print_error_and_exit(99, "Error: Can't write to %s\n", destination_file);
	}

	if (close(source_fd) == -1 || close(dest_fd) == -1)
		print_error_and_exit(100, "Error: Can't close fd %d\n", source_file);

	return (0);
}
