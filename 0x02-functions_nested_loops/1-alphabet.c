#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase
 */
void print_alphabet(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar((char) (i + 97));
	}
	_putchar('\n');
}
