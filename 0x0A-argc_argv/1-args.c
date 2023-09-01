#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it, followed by a new line
 * @argc: count of the arguments supplied to the program
 * @argv: array of pointers to the arguments
 * Return: On success 0
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
