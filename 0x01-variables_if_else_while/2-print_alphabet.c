#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
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

	putchar('\n');

	return (0);
}
