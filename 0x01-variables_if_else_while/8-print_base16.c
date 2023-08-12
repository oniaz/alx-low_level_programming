#include <stdio.h>

/**
 * main - prints the digits 0-9
 * followed by letetrs a:f
 *
 * Return: 0 if successful.
 */
int main(void)
{
	int i;

	for (i = 48; i < 103; i++)
	{
		putchar(i);
		if (i == 57)
		{
			i += 39;
		}
	}

	putchar('\n');

	return (0);
}
