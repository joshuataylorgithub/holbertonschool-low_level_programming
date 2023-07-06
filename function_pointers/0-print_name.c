#include <stdio.h>

/**
 * print_name - function that prints a name
 * Returns: (void)
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	f(name);

	else
	printf("Invalid function pointer");
}
