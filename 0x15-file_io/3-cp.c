#include "main.h"

/**
 * main - copies the content of a file to another file.
 * @ac: number of arguments
 * @av: arguments
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	ssize_t f_to, f_from, c_read = 19, written, cl_from, cl_to;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f_from = open(av[1], O_RDONLY);
	f_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while (c_read)
	{
		c_read = read(f_from, buffer, 1024);
		if (f_from == -1 || c_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		written = write(f_to, buffer, c_read);
		if (f_to  == -1 || written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	cl_from = close(f_from);
	if (cl_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %lu\n", cl_from);
		exit(100);
	}
	cl_to = close(f_to);
	if (cl_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %lu\n", cl_to);
		exit(100);
	}

	return (0);
}
