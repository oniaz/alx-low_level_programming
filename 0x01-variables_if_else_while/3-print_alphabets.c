#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * then prints it in uppercase
 *
 * Return: 0 if successful.
 */
int main(void)
{
	char c;
	int i;

	for (i = 0; i < 26; i++)
	{
		c = (char) (i + 97);
		putchar(c);
	}

	for (i = 0; i < 26; i++)
	{
		c = (char) (i + 65);
		putchar(c);
	}

	putchar('\n');

	return (0);
}
