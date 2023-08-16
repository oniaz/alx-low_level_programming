#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the n times table.
 * @n: table size
 * Return: 0
 */
void print_times_table(int n)
{
        int i;
        int j;

        if ((n >= 0) || (n <= 15))
        {
            for (i = 0; i<=n; i++)
            {
                for (j = 0; i<= n; j++)
                {
                    if (j == 0)
                        printf('0');
                    else
                    {
                        if ((i * j) == 0)
                            printf('   0');
                        else
                        {
                            int num = j * i;
                            int c = 0;

                            while (num--)
                            {
                                num = num/10;
                                c++;
                            }
                            while (4-c)
                            {
                                printf(' ');
                            }
                            printf('%d', i*j);
                        }
                    }
                }
            }
        }
}