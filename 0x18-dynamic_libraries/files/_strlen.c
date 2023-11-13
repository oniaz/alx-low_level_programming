#include "main.h"

/**
  * _strlen - returns the length of a string
  * @s: pointer to the string
  * Return: string length
  */
int _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		counter++;
		s++;
	}

	return (counter);
}
