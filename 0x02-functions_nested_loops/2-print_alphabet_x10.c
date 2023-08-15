#include "main.h"
/**
 * print_alphabet_x10 - loops 10 times printing the alpahbet in lowercase
 */
void print_alphabet_x10(void)
{
	int n = 10;

	while (n--)
	{
		int i;

		for (i = 0; i < 26; i++)
		{
			_putchar((char) (i + 97));
		}
		_putchar('\n');
	}
}
