#include <stdio.h>

/**
 * _strcmp - ccompares two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: the difference in ASCII values between the first
 * differing characters in the two strings
 */
int _strcmp(char *s1, char *s2)
{
	int diff = 0;

	while (1 > 0)
	{
		diff = *s1 - *s2;

		if (diff != 0)
			break;

		if ((*s1 == 0) || (*s2 == 0))
			break;

		s1++;
		s2++;
	}

	return (diff);
}
