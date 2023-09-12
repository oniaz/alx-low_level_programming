#include <stdlib.h>
#include "dog.h"

/**
 * _counter - counts chars in a given string
 * @s: pointer to the string
 * Return: string length
 */
unsigned long int _counter(char *s)
{
	unsigned long int c;

	c = 0;
	while (*s != '\0')
	{
		c++;
		s++;
	}

	return (c);
}

/**
 * char *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to destination
 * @src: pointer to source
 *
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = src[i];

	return (ptr);
}

/**
 * *new_dog - creates a new dog
 * @name: pointer to dog's name
 * @age: dog's age
 * @owner: pointer to dog's owner
 *
 * Return: pointer to the dog instant or NULL in case of failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *kalb = malloc(sizeof(dog_t));

	if (kalb == NULL)
		return (NULL);

	(*kalb).name = malloc(sizeof(char) * (_counter(name) + 1));
	if (kalb->name == NULL)
	{
		free(kalb);
		return (NULL);
	}

	(*kalb).owner = malloc(sizeof(char) * (_counter(owner) + 1));
	if ((*kalb).owner == NULL)
	{
		free(kalb);
		free((*kalb).name);
		return (NULL);
	}

	_strcpy((*kalb).name, name);
	_strcpy((*kalb).owner, owner);

	(*kalb).age = age;

	return (kalb);
}
