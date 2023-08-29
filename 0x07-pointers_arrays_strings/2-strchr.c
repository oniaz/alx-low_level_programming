#include "main.h"
#define NULL ((void *)0)

/**
 * *_strchr - encodes a string using rot13
 * @s: pointer to teh string
 * @c: char to be located
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			break;
		s++;
	}
	if (*s == '\0')
		s = 0;

	return (s);
}
