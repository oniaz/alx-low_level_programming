#include "main.h"
/**
 * print_diagonal - prints a diagonal
 * @n: number of times char \ is printed
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 1 ; i <= n; i++)
		{
			int s;

			for (s = 1; s <= i; s++)
			{
				if (s == i)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

