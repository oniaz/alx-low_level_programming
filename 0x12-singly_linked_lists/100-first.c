#include "lists.h"

__attribute__((constructor))
/**
 * tortoise_said - prints what the tortoise said
 * before the main function is executed.
 */
void tortoise_said(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
