/**
 * *_strcat - concatenates two strings
 * @src: pointer to source string that will be appended to destination
 * @dest: pointer to destination string where contents of src will be added
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != '\0')
	{
		*ptr = *src;
		src++;
		ptr++;
	}

	return (dest);
}
