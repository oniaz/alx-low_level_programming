#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: poitner to a string containing the file path.
 * @text_content: text to be appended to the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{

	ssize_t fd, l = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[l] != '\0')
			l++;

		if (write(fd, text_content, l) == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
