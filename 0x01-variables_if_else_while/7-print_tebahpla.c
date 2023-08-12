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

	for (i = 25; i >= 0; i--)
	{
		c = (char) (i + 97);
		putchar(c);
	}

	putchar('\n');

	return (0);
}
