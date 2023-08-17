#include "main.h"
/**
 * print_line - print a line
 * @n: line length
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n--)
		{
			_putchar('_');
		}
	}
	_putchar('\n');

}
