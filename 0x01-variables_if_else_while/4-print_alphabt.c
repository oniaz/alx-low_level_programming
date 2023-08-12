#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * but e & q
 *
 * Return: 0 if successful.
 */
int main(void)
{
	char c;
	int i;

	for (i = 0; i < 26; i++)
	{
		if (i != 4 && i != 16)
		{
			c = (char) (i + 97);
			putchar(c);
		}
	}

	putchar('\n');

	return (0);
}
