#include <stdio.h>
#include "main.h"

/**
 * main - prints the program name, followed by a new line
 * @argc: count of the arguments supplied to the program
 * @argv: array of pointers to the arguments
 * Return: On success 0
 */
int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
