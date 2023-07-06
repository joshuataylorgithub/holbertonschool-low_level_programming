#include <stdio.h>

/**
 * print_name - function that prints a name
 * Returns: (void)
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
