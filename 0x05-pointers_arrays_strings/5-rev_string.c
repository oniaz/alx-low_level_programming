#include "main.h"

/**
  * rev_string - reverses a string
  * @s: pointer to the string
  */
void rev_string(char *s)
{
	char *ptr = s;
	int c = 0;

	while (*ptr != '\0')
	{
		c++;
		ptr++;
	}

	int i;
	char swapper;
	int mid = c / 2;

	for (i = 0; i < mid; i++)
	{
		swapper = s[i];
		s[i] = s[c - 1];
		s[c - 1] = swapper;
		c--;
	}
}
