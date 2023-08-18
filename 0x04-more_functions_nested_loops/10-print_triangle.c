#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: triangle size
 */
void print_triangle(int size)
{
	int i;
	int s;
	int j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			s = size - i;
			while (s--)
			{
				_putchar(' ');
			}
			j = i;
			while (j--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
