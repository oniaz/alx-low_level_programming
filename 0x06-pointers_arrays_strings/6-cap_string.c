#include <stdio.h>

/**
 * *cap_string - capitalizes all words of a string
 * @s: pointer to the string
 * Return: pointer to the string
 */
char *cap_string(char *s)
{
	char *ptr = s;
	int flag = 1;

	while (*ptr != '\0')
	{
		if (flag == 1)
		{
			flag = 0;
			if (*ptr >= 'a' && *ptr <= 'z')
			{
				*ptr -= 32;
			}
		}

		else if (flag != 1)
		{
			if ((*ptr >= 'a' && *ptr <= 'z') &&
			(*(ptr - 1) == ' ' || *(ptr - 1) == '\t' ||
			*(ptr - 1) == '\n' || *(ptr - 1) == ',' ||
			*(ptr - 1) == ';' || *(ptr - 1) == '.' ||
			*(ptr - 1) == '!' || *(ptr - 1) == '?' ||
			*(ptr - 1) == '"' || *(ptr - 1) == '(' ||
			*(ptr - 1) == ')' || *(ptr - 1) == '{' ||
			*(ptr - 1) == '}'))
			{
				*ptr -= 32;
				flag = 0;
			}

			ptr++;
		}
	}
	return (s);
}
