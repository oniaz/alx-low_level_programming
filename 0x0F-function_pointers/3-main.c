#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - simple calculator
 * @argc: number the arguments
 * @argv: array of pointers to the arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int num1, num2;
	char* op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	
	op = argv[2];

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if (atoi(argv[3]) == 0 && (argv[2][0] == '%' || argv[2][0] == '/'))
	{
		printf("Error\n");
		exit(100);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	printf("%d\n", get_op_func(op)(num1, num2));
	
	return (0);
}
