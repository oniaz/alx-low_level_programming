#include "main.h"
#include <stdlib.h>

/**
 * counter - counts characters in all arguments
 * @ac: number of arguments
 * @av: pointer to argumrnts array
 * Return: sum of characters in all arguments
 */
unsigned long int counter(int ac, char **av)
{
	int i, j;
	unsigned long int c = 0;
	char *ptr;

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			ptr = av[i];
			for (j = 0; ptr[j] != '\0'; j++)
			{
				c++;
			}
		}
	}
	return (c);
}

/**
 * *argstostr - concatenates all program arguments
 * @ac: number of arguments
 * @av: pointer to argumrnts array
 * Return: pointer to memory allocation
 */
char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
		return (NULL);

	else
	{
		unsigned long int c = counter(ac, av) + ac + 1;
		char *nptr = (char *)malloc(sizeof(char) * c);

		if (nptr == NULL)
			return (NULL);

		else
		{
			int i = 0, j, k;

			for (j = 0; j < ac; j++)
			{
				for (k = 0; av[j][k] != '\0'; k++)
				{
					nptr[i] = av[j][k];
					i++;
				}
				nptr[i] = '\n';
				i++;
			}
			nptr[i] = '\0';
		}
		return (nptr);
	}
}
