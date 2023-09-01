#include <stdio.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: count of the arguments supplied to the program
 * @argv: array of pointers to the arguments
 * Return: On success 0
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", _atoi(argv[1]) * _atoi(argv[2]));

	return (0);
}
