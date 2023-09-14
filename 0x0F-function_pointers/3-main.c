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
	int num1, num2, result, (*oppo)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*' && \
	argv[2][0] != '/' && argv[2][0] != '%')
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
	oppo = get_op_func(&argv[2][0]);
	result = oppo(num1, num2);
	printf("%d\n", result);

	return (0);
}
