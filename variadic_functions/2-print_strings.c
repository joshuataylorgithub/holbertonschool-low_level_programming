#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings followed by a new line
 * @seperator: the string(s) to be printed
 * @n: number of arguments in the function
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
	str = va_arg(args, const char *);

	if (str == NULL)
	printf("(nil)");
	
	else
	printf("%s", str);

	if (seperator != NULL && i < n - 1 && str != NULL && va_arg(args, const char*) != NULL)
	printf("%s", seperator);
	}
	va_end(args);
	printf("\n");
}
