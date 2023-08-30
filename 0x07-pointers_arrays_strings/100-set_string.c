#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: double pointer, points to the pointer to the string that will be copied
 * @to: pointer to the string that will be the source
 */
void set_string(char **s, char *to)
{
	*s = (char *)to;
}
