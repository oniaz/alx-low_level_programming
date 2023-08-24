#include <stdio.h>

/**
 * *leet - changes all lowercase letters of a string to uppercase
 * @s: pointer to the string
 * Return: pointer to the string
 */
char *leet(char *s)
{
	char arr[] = {'A', 'a', '4', 'E', 'e', '3',
		'O', 'o', '0', 'T', 't', '7', 'L', 'l', '1'};
	char *ptr = s;
	int i;

	while (*ptr != '\0')
	{
		for (i = 0; i < 15; i += 3)
		{
			if ((*ptr == arr[i]) || (*ptr == arr[i + 1]))
			{
				*ptr = arr[i + 2];
				break;
			}
		}
		ptr++;
	}

	return (s);
}
