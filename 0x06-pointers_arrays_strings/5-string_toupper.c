#include <stdio.h>

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @s: pointer to the string
 * Return: pointer to the string
 */
char *string_toupper(char *s)
{
	char *ptr = s;

	while (*ptr != '\0')
	{
		if ((*ptr >= 97) && (*ptr <= 122))
			*ptr -= 32;

		ptr++;
	}

	return (s);
}
