#include "main.h"
/**
 * more_numbers - prints numnbers 0:14
 */
void more_numbers(void)
{
	int i;
	int j;
	int n;

	for (n = 10; n > 0; n--)
	{
		for (j = 48; j <= 49; j++)
		{
			for (i = 48; i <= 57; i++)
			{
				if (j != 48)
					_putchar(j);
				_putchar(i);
				if ((j == 49) && (i == 52))
					break;
			}
		}
		_putchar('\n');
	}
}
