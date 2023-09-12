#include <stdlib.h>
#include "main.h"

/**
 * _wordcounter - counts words separated by space in a string
 * @str: pointer to string
 * Return: word count
 */
long int _wordcounter(char *str)
{
	int flag;
	long int c;

	if (str == NULL)
		return (0);

	flag = 0;
	c = 0;

	while (*str != '\0')
	{
		if (flag == 0 && *str != ' ')
		{
			c++;
			flag = 1;
		}

		else if (flag == 1 && *str == ' ')
			flag = 0;

		str++;
	}

	return (c);
}

/**
 * _counter - counts chars in a given string
 * @s: pointer to the string
 * Return: string length
 */
long int _counter(char *s)
{
	long int c;

	c = 0;
	while (*s != ' ' && *s != '\0')
	{
		c++;
		s++;
	}

	return (c);
}

/**
 * **strtow - splits a string into words
 * @str: pointer to string
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	long int word_count, i, j, o, unmot, wn;
	char **word_array;
	int flag;

	unmot = 0, wn = 0, flag = 0, i = 0, word_count = _wordcounter(str);
	if (word_count == 0)
		return (NULL);
	word_array = malloc((word_count + 1) * sizeof(char *));
	if (word_array == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && flag == 0)
		{
			unmot = _counter(&str[i]);
			word_array[wn] = malloc(unmot + 1);
			if (word_array[wn] == NULL)
			{
				while (wn >= 0)
					free(word_array[wn]), wn--;
				free(word_array);
				return (NULL);
			}
			for (j = 0, o = i; j < unmot; j++, o++)
				word_array[wn][j] = str[o];
			word_array[wn][unmot] = '\0';
			flag = 1, i += unmot - 1, wn++;

		}
		else if (str[i] == ' ' && flag == 1)
			flag = 0;
		i++;
	}
	word_array[wn] = NULL;
	return (word_array);
}
