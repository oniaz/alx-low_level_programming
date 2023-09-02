#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>

/**
 * main - prints the minimum coins to make change for an amount of money
 * @argc: count of the arguments supplied to the program
 * @argv: array of pointers to the arguments
 * Return: On success 0
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		int money = atoi(argv[1]);
		int cents = 0;
		int i = 0;
		int arr[5] = {25, 10, 5, 2, 1};

		while (money > 0)
		{
			if (money >= arr[i])
			{
				money -= arr[i];
				cents++;
			}

			else
				i++;
		}
		printf("%d\n", cents);

		return (0);
	}
}
