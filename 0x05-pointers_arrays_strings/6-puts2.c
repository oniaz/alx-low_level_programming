#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 * followed by a new line
 * @str: pointer to string
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;

		if (*str == '\0')
			break;
	}
	_putchar('\n');
}