#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print natural numbers from n to 98,
 * separated by a comma, followed by a space, followed by a new line
 *@n: input number
 */
void print_to_98(int n)
{
	int flag = 1;

	if (n > 98)
	{
		while (n >= 98)
		{
			if (flag == 1)
				flag = 0;
			else
			{
				printf(", ");
			}
			printf("%d", n);
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			if (flag == 1)
				flag = 0;
			else
			{
				printf(", ");
			}
			printf("%d", n);
			n++;
		}
	}
	printf("\n");
}
