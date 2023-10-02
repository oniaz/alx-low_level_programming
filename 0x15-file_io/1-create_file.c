#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 * Return: string length
 */
unsigned long int _strlen(char *s)
{

	unsigned long int counter = 0;

	while (*s != '\0')
	{
		counter++;
		s++;
	}

	return (counter);
}

/**
 * create_file - creates a file with rw------- permission.
 * If file already exists, trucnates it.
 * then writes passed text in the file.
 * @filename: pointer to the string contianing file path.
 * @text_content: text to be written inside the file.
 *
 * Return: 1 for success , -1 for failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t written = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	if (text_content)
		written = write(fd, text_content, _strlen(text_content));

	close(fd);

	if (written == -1)
		return (-1);

	return (1);
}
