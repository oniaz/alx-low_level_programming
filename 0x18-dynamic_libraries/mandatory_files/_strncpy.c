/**
 * *_strncpy - copies a string, works like strncpy
 * @src: pointer to source string that will be copied to destination
 * @dest: pointer to destination string where contents of src will be placed
 * @n: number of characters to be copied
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (n > 0)
	{
		if (*src == '\0')
			break;
		*ptr = *src;
		src++;
		ptr++;
		n--;
	}

	while (n > 0)
	{
		if (*ptr == '\0')
			break;
		*ptr = '\0';
		ptr++;
		n--;
	}

	return (dest);
}
