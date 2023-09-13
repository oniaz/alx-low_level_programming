#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer to the name to be printed
 * @f: pointer to the function to be used
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
