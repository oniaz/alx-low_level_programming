#include <stdio.h>

/**
 * _counter - counts chars in a given string
 * @s: pointer to the string
 * @c: counter at 0
 * Return: string length
 */
int _counter(char *s, int c)
{
	if (*s != '\0')
	{
		c++;
		s++;
		return (_counter(s, c));
	}

	return (c);
}

/**
 * _palindrome - checks if a string is palindrome
 * @s1: pointer to the start of the string
 * @s2: pointer to the end of the string
 * @mid: pointer to the middle of the string
 *
 * Return: 1 if palindrome otherwise 0
 */
int _palindrome(char *s1, char *s2, char *mid)
{
	if (*s1 != *s2)
		return (0);

	if (s1 == mid)
		return (1);

	s1++;
	s2--;

	return (_palindrome(s1, s2, mid));
}

/**
 * is_palindrome - checks if a string is palindrome
 * @s: pointer to string
 * Return: 1 if prime otherwise 0
 */
int is_palindrome(char *s)
{
	int c = _counter(s, 0);

	if (c == 0 || c == 1)
		return (1);

	else
	{
		char *mid = s + (c / 2);

		return (_palindrome(s, s + c - 1, mid));
	}
}
