#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0 if successful.
 */
int main(void)
{
	int i;

	for (i = 25; i >= 0; i--)
	{
		putchar(i + 97);
	}

	putchar('\n');

	return (0);
}
