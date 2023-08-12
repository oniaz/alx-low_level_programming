#include <stdio.h>

/**
 * main - prints the digits 0-9 with , and space
 *
 * Return: 0 if successful.
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(32);
		}
	}
	putchar('\n');

	return (0);
}
