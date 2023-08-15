#include "main.h"
/**
 * main - prints the alphabet in lowercase
 * but e & q
 *
 * Return: 0 if successful.
 */
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		if (i != 4 && i != 16)
		{
			_putchar((char) (i + 97));
		}
	}

	_putchar('\n');

	return (0);
}

