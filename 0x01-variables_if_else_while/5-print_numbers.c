#include <stdio.h>

/**
 * main - prints the digits 0-9
 *
 * Return: 0 if successful.
 */
int main(void)
{
        int i;

        for (i = 0; i < 10; i++)
        {
            printf("%u", i);
        }

        putchar('\n');

        return (0);
}
