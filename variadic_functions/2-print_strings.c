#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings followed by a new line
 * @separator: the string(s) to be printed
 * @n: number of arguments in the function
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *str;
	const char *next_str;

	va_start(args, n);
	
	str = va_arg(args, const char*);
	for (i = 0; i < n; i++)
	{
	if (str == NULL)
	printf("(nil)");
	
	else
	printf("%s", str);

	next_str = va_arg(args, const char *);
	if (separator != NULL && i < n - 1 && str != NULL)
	{
	if (next_str != NULL)
	printf("%s", separator);
	}
	}
	va_end(args);
	printf("\n");
}
