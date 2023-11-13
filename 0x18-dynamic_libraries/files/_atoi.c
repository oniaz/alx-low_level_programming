#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to string
 * Return: the converted integer from a string
 */
int _atoi(char *s)
{
	int i = 0,  c = 0, flag = 0;
	unsigned int num = 0;

	while (s[i] != '\0')
	{
		if (s[i] == 45)
		{
			c++;
		}

		else if ((s[i] >= 48) && (s[i] <= 57))
		{
			if ((c % 2 != 0) && ((s[i - 1] < 48) || (s[i - 1] > 57)))
			{
				flag = 1;
			}

			num *= 10;
			num += (s[i] - '0');

			if ((s[i + 1] < 48) || (s[i + 1] > 57))
				break;
		}
		i++;
	}
	if (flag == 1)
	{
		num *= -1;
	}

	return (num);
}
