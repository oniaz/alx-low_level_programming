#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: pointer to a string containing filepath
* @letters: number of letters to be read and printed
*
* Return: number of letters read and printed
* or 0 if open, read, or write fails, or if filename is NULL.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	bytes_read = read(fd, buffer, letters);

	if (bytes_read == -1)

		return (0);

	close(fd);

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	free(buffer);

	if (bytes_read != bytes_written)
		return (0);

	return (bytes_written);
}
