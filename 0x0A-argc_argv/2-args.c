#include <stdio.h>

#include "main.h"

/**
 * main - prints all arguments it receives, each in a separate line.
 * @argc: count of the arguments supplied to the program
 * @argv: array of pointers to the arguments
 * Return: On success 0
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}
