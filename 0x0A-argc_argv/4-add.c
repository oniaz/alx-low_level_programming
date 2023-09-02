#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: count of the arguments supplied to the program
 * @argv: array of pointers to the arguments
 * Return: On success 0
 */
int main(int argc, char **argv)
{
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	else
	{
		int i;

		for (i = 1; i < argc; i++)
		{
			char *elchar = argv[i];

			while (*elchar != '\0')
			{
				if (!isdigit(*elchar))
				{
					printf("Error\n");
					return (1);
				}
				elchar++;
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);

		return (0);
	}
}
