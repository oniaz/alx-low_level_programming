#include "main.h"

/**
 * puts_half - prints the second half of the string
 * @str: pointer to the string
 */
void puts_half(char *str)
{
	char *ptr = s;
	int c = 0;
	int i;
	int mid;

	while (*ptr != '\0')
	{
		c++;
		ptr++;
	}

	if (c % 2 == 0)
	{
		mid = (c / 2);
	}
	else
	{
		mid = (c / 2) + 1;
	}

	for (i = mid; i < c; i++)
	{
		 _putchar(s[i]);
	}
}
