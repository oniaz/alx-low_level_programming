#include "main.h"
/**
 * times_table - prints the 9 times table.
 * Return: 0
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j == 0)
			{
				_putchar('0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				if ((i * j) / 10 == 0)
					_putchar(' ');
				else
					_putchar(((i * j) / 10) + '0');
				_putchar(((i * j) % 10) + '0');
				if (j == 9)
				{
					_putchar('\n');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
	}
}
