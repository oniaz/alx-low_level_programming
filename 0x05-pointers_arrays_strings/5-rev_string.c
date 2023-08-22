#include "main.h"

/**
  * rev_string - reverses a string
  * @s: pointer to the string
  */
void rev_string(char *s)
{
	int c = 1;

	while (*s != '\0')
	{
		c++;
		s++;
	}

	char rev[c];
	int i;

	for (i = 0; i < c; i++)
	{
		rev[i] = *s;
		s--;
	}

	for (i = 0; i < c; i++)
	{
		s[i] = rev[i];
	}
}
