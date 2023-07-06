#include <stdio.h>

/**
 * print_name - function that prints a name
 * @name: name to input
 * @f: function name
 * Returns: (void)
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	f(name);

	else
	printf("Invalid function pointer");
}
